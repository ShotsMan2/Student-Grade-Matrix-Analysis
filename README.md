# Student Grade Matrix Analysis

This project implements a data processing algorithm in C to analyze academic performance using a 2D Matrix structure.

## ⚙️ Algorithm Logic

1.  **Input:**
    * Number of Students ($N$) -> Rows
    * Number of Courses ($M$) -> Columns
2.  **Simulation:**
    * Populates an $N \times M$ matrix with random scores $[0, 100]$.
3.  **Analysis:**
    * Iterates through each row (student).
    * Calculates the arithmetic mean of grades.
    * **Filtering:** Counts students with an average score $> 50$.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o grade_analyzer
    ```
2.  Run the executable:
    ```bash
    ./grade_analyzer
    ```
3.  Enter student and course counts.

## 📊 Output Example

```text
Ogrenci sayisini (N) giriniz: 3
Ders sayisini (M) giriniz: 2

1. Ogrenci Notlari: 45  55 | Ortalama: 50 (KALDI)
2. Ogrenci Notlari: 80  90 | Ortalama: 85 (GECTI)
3. Ogrenci Notlari: 60  70 | Ortalama: 65 (GECTI)

Ortalamasi 50'den buyuk ogrenci sayisi: 2
