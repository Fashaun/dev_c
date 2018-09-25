// 1. 宣告callback function的prototype(原型)
typedef struct{
	uint8_t time ;
	void (*bsp_callback)(void); 
}Display_Info_struct;
 
//2.宣告該struct的變數 DisplayInfo
static Display_Info_struct DisplayInfo;
 
//3.定義會被呼叫的函式
void showHelloword()
{
	printf("Hello world.\n");
}
 
//4.定義會使用CallBack Fuction的函式
void BSP_SHOW(uint8_t time,void (*callback)(void))
{
	DisplayInfo.time = time;
	DisplayInfo.bsp_callback = callback;

        while(DisplayInfo.time > 0){
            --DisplayInfo.time;
            if(DisplayInfo.time == 0){
		//呼叫callback function
		if(DisplayInfo.bsp_callback) 
			DisplayInfo.bsp_callback(); 
		//清除callback fuction
		DisplayInfo.bsp_callback = 0;
            }
            delay_ms(1000); // 1 second 
        }
}
 
//5.由main執行的呼叫點起始
void main(){
	//顯示10秒的hello word字串
	BSP_SHOW( 10, showHelloword); 
}
