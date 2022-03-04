
<h1>Color Menu GTAV and RDR2</h1><br >
<p>Menu design for GTAV or RDR2, created to make simple way to select colors for any functions. It can be used for any function that needs color. With responsive and self-adjusting layout</p>
<p>I know maybe have one more simple mode to do that same thing, and you feels free to change and make this more simple. For me, is ok and works.<p>

<br >
<hr />

<p>Note:
GTAV and RDR2 have differents DRAW_RECT formats, then you need to adjust that

RDR2 need 2 last params (bools)

GTAV example:</p>



```C++
void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a);
```





<br >

<p>RDR2 Example:</p>



```C++
void DRAW_RECT ( float x, float y, float width, float height, int r, int g, int b, int a, BOOL p8, BOOL p9 )
```




