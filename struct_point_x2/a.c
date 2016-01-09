#include <stdio.h>
struct scull_qset {
	void ** data;
	struct scull_qset * next; 
};

int main(){
	struct scull_qset a;
	int **int_p_p,*int_p,int_a,int_b;
	void *p;
	//int_p=NULL;
	int_a = 100;
	int_b = (int ****)int_a;
	int_p = &int_a;
	int_p_p = &int_p;
	//a = (struct scull)malloc(sizeof(struct scull_qset));
	printf("%x\n",a.data);
	a.data=NULL;
	printf("%x\n",a.data);
	//a.data=int_p;
	a.data=(int **)int_p_p;
	a.next = a.data;
	p = &a;
	printf("%x\n",(struct scull_qset *)p);
	printf("int_a:%d\n",(int*)int_a);
	printf("int_b:%d\n",(int*)int_b);
	printf("int_p:%d\n",(int *****)*int_p);            //0.(type *) is just for comment, no really using. 
	printf("int_p_p:%d\n",(int* *)**int_p_p);
	//printf("a.data:%d\n",(int **)**a.data); //   1.you can use >>**void<< to store **point tmp,
	                                          // but you may can not printf >>((void **) tmp)<<.
	int **tmp;
	tmp= a.data;
	printf("tmp:%d\n",**tmp);

	printf("Hello\n");
	return 0;
}
