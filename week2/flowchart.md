```mermaid
flowchart TD
S([Start]) --> I[/recieve score A , B /]
I --> D{>=80?}
D -->|ture| A[A]
D -->|flase| D2{>=70?}
D2 -->|ture| B[B]
D2 -->|flase| D3{>=60?}
D3 -->|true| C[C]
D3 -->|flase| D4{>=50?}
D4 -->|true| Dg[D]
D4 -->|flase| F[F]
A & B & C & Dg & F --> O[/grade/]
O --> E([End])
```

---

```mermaid
flowchart TD
	start([Start]) -->input[/receive A , B/]
	input --> P1{a > b ? }
	P1 --> |true| A[/ print A/]
	P1 --> |flase| B[/ print B/]
	A & B --> Output([END])


```

---

```mermaid
flowchart TD
	Start([start]) --> input[/recieve N/]
	input --> I[i = 1]
	I --> IR{i <= N?}
	IR --> |true| A[/ print I/]
	IR --> |flase| B([ END])
	A --> II[ i++]
	II --> IR


```

<style>#mermaid-1782719779714{font-family:sans-serif;font-size:16px;fill:#333;}@keyframes edge-animation-frame{from{stroke-dashoffset:0;}}@keyframes dash{to{stroke-dashoffset:0;}}#mermaid-1782719779714 .edge-animation-slow{stroke-dasharray:9,5!important;stroke-dashoffset:900;animation:dash 50s linear infinite;stroke-linecap:round;}#mermaid-1782719779714 .edge-animation-fast{stroke-dasharray:9,5!important;stroke-dashoffset:900;animation:dash 20s linear infinite;stroke-linecap:round;}#mermaid-1782719779714 .error-icon{fill:#552222;}#mermaid-1782719779714 .error-text{fill:#552222;stroke:#552222;}#mermaid-1782719779714 .edge-thickness-normal{stroke-width:1px;}#mermaid-1782719779714 .edge-thickness-thick{stroke-width:3.5px;}#mermaid-1782719779714 .edge-pattern-solid{stroke-dasharray:0;}#mermaid-1782719779714 .edge-thickness-invisible{stroke-width:0;fill:none;}#mermaid-1782719779714 .edge-pattern-dashed{stroke-dasharray:3;}#mermaid-1782719779714 .edge-pattern-dotted{stroke-dasharray:2;}#mermaid-1782719779714 .marker{fill:#333333;stroke:#333333;}#mermaid-1782719779714 .marker.cross{stroke:#333333;}#mermaid-1782719779714 svg{font-family:sans-serif;font-size:16px;}#mermaid-1782719779714 p{margin:0;}#mermaid-1782719779714 .node .neo-node{stroke:#9370DB;}#mermaid-1782719779714 [data-look="neo"].node rect,#mermaid-1782719779714 [data-look="neo"].cluster rect,#mermaid-1782719779714 [data-look="neo"].node polygon{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782719779714 [data-look="neo"].node path{stroke:#9370DB;stroke-width:1px;}#mermaid-1782719779714 [data-look="neo"].node .outer-path{filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782719779714 [data-look="neo"].node .neo-line path{stroke:#9370DB;filter:none;}#mermaid-1782719779714 [data-look="neo"].node circle{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782719779714 [data-look="neo"].node circle .state-start{fill:#000000;}#mermaid-1782719779714 [data-look="neo"].icon-shape .icon{fill:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782719779714 [data-look="neo"].icon-shape .icon-neo path{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782719779714 :root{--mermaid-font-family:sans-serif;}#mermaid-1782719779714 :root{--mermaid-alt-font-family:sans-serif;}</style>
