# 成绩统计小工具

作者：孙慧鑫（GitHub：huixin-sun）。

输入若干个 0～100 分的成绩，程序输出人数、平均分、最低分、最高分和及格率（60 分及以上为及格）。输入以空格或换行分隔，读取到输入结束。

## 编译与运行


```sh
g++ -std=c++11 -Wall -Wextra -pedantic main.cpp -o grade-summary
```

Windows PowerShell：

```powershell
'80 90 100' | .\grade-summary.exe
```

Linux / macOS：

```sh
echo '80 90 100' | ./grade-summary
```

预期输出：

```text
Count: 3
Average: 90.00
Minimum: 80.00
Maximum: 100.00
Pass rate: 100.00%
```

小数成绩也可以输入。空输入、非数字或超出 0～100 的成绩会报错，并以退出码 1 结束。遇到错误时不会输出部分统计结果。

## 示例数据

`sample.txt` 包含边界分数和小数分数。在 PowerShell 中运行：

```powershell
Get-Content sample.txt | .\grade-summary.exe
```

应输出人数 5、平均分 63.00、最低分 0.00、最高分 100.00、及格率 80.00%。

## AI 使用说明

本项目由 OpenAI Codex 协助编写代码。

