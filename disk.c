 1 #include<stdio.h>
  2  void fcfs()
  3 {
  4         int i,j,n,queue[20],head,pre,track,total=0;
  5 //      double avg_seek;
  6         printf("Enter the number of processses:");
  7         scanf("%d",&n);
  8
  9         printf("Enter maximum number of cylinders:");
 10         scanf("%d",&track);
 11         track--;
 12
 13         for(i=0;i<n;i++)
 14         {
 15                 printf("Enter cylinder for process %d:",i);
 16                 int temp;
 17         //      scanf("%d",&temp);
 18         //      if(temp > track || temp < 0)
 19         //      {
 20         //              printf("Invalid!");
 21
 22                 scanf("%d",&queue[i]);
 23
 24         }
 25         printf("outside for");
 26
 27         printf("Enter initial head position:");
 28         scanf("%d",&head);
 29
 30
 31         for(i=0;i<n;i++)
 32         {
 33                 total += abs(head - queue[i]);
 34                 pre = head;
 35                 head = queue[i];
 36                 printf("%d  ",queue[i]);
 37
 38         }
 39         double avg_seek = (double) total/n;
 40         printf("Total cylinders:%d\n",total);
 41         printf("Average seek time:%f\n",avg_seek);
 42
 43 }
 44
 45 void gen_scan()
 46 {
 47
 48
 49         int i,j,n,queue[20],head,pre,track,total=0,i_val;
 50 //      double avg_seek;
 51         printf("Enter the number of processses:");
 52         scanf("%d",&n);
 53
 54         printf("Enter maximum number of cylinders:");
 55         scanf("%d",&track);
 56         track--;
 57
 58         for(i=0;i<n;i++)
 59         {
 60                 printf("Enter cylinder for process %d:",i);
 61 //              int temp;
 62         //      scanf("%d",&temp);
 63         //      if(temp > track || temp < 0)
 64         //      {
 65         //              printf("Invalid!");
 66
 67                 scanf("%d",&queue[i]);
 68
 69         }
 70
 71         printf("Enter initial head position:");
 72         scanf("%d",&head);
 73
 74         for(i=0;i<n;i++)
 75         {
 76                 for(j=0;j<n-i-1;j++)
 77                 {
 78                         if(queue[j] > queue[j+1])
 79                         {
 80                                 int temp = queue[j+1];
 81                                 queue[j+1] = queue[j];
 82                                 queue[j] = temp;
 83                         }
 84                 }
 85         }
 86
87 printf("\nafter sort\n");
 88 for(i=0;i<n;i++)
 89 {
 90         printf("%d ",queue[i]);
 91 }
 92
 93 printf("\n");
 94
 95         for(i=0;i<n;i++)
 96         {
 97                 if(queue[i] >= head)
 98                 {
 99                         i_val = i;
100                         break;
101                }
102         }
103
104 printf("\ni_val:%d\n",i_val);
105
106         for(j=i_val;j<n;j++)
107         {
108                 total += abs(head - queue[j]);
109                 printf("%d ",queue[j]);
110                 pre = head;
111                 head = queue[j];
112
113         }
114
115         total += abs(track-head);
116         head = track;
117
118
119         for(j=i_val-1;j>=0;j--)
120         {
121                 total += abs(head - queue[j]);
122                 printf("%d ",queue[j]);
123                 pre = head;
124                 head = queue[j];
125         }
126
127
128         double avg_seek = (double) total/n;
129         printf("\nTotal cylinders:%d",total);
130         printf("\nAverage seek time:%f\n",avg_seek);
131
132
133 }
134
135
136 void c_scan()
137 {
138
139
140         int i,j,n,queue[20],head,pre,track,total=0,i_val;
141 //      double avg_seek;
142         printf("Enter the number of processses:");
143         scanf("%d",&n);
144
145         printf("Enter maximum number of cylinders:");
146         scanf("%d",&track);
147         track--;
148
149         for(i=0;i<n;i++)
150         {
151                 printf("Enter cylinder for process %d:",i);
152 //              int temp;
153         //      scanf("%d",&temp);
154         //      if(temp > track || temp < 0)
155         //      {
156         //              printf("Invalid!");
157
158                 scanf("%d",&queue[i]);
159
160         }
161
162         printf("Enter initial head position:");
163         scanf("%d",&head);
164
165         for(i=0;i<n;i++)
166         {
167                 for(j=0;j<n-i-1;j++)
168                 {
169                         if(queue[j] > queue[j+1])
170                         {
171                                 int temp = queue[j+1];
172                                 queue[j+1] = queue[j];
173                                 queue[j] = temp;
174                         }
175                 }
176         }
177
178 printf("\nafter sort\n");
179 for(i=0;i<n;i++)
180 {
181         printf("%d ",queue[i]);
182 }
183
184 printf("\n");
185
186         for(i=0;i<n;i++)
187         {
188                 if(queue[i] >= head)
189                 {
190                         i_val = i;
191                         break;
192                 }
193         }
194
195
196         for(j=i_val;j<n;j++)
197         {
198                 total += abs(head - queue[j]);
199                 head=
200
201 ////////////////////////////to be completed
202
203
204 }
205
206
207
208
209
210
211 void main()
212 {
213         int ch,ctn=1;
214         do
215         {
216                 printf("\n\tMenu\n");
217                 printf("\t\t1.FCFS\n\t\t2.SCAN\n\t\t3.CSCAN\n");
218                 printf("Enter your choice:");
219                 scanf("%d",&ch);
220
221                 switch(ch)
222                 {
223                         case 1 :fcfs();
224                                 break;
225                         case 2 :gen_scan();
226                                 break;
227                         default:printf("Enter a valid choice!:");
228                 }
229
230                 printf("Press 1 to continue 0 to exit!");
231         }while(ctn!=0);
232
233 }
