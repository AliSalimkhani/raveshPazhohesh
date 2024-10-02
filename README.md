# توضیحات
این یک الگوریتم ساده به زبان C++ را است که با استفاده از اولویت‌های هر گروه، ترتیب مناسبی برای ارائه‌ها تعیین می‌کند.این الگوریتم چالش توزیع موضوعات 4 نفره را حل میکند.

هرچه اولویت موضوع یک گروه بیشتر باشد عدد کمتری به آن اختصاص میابد. هدف اصلی این برنامه، پیدا کردن ترتیب بهینه‌ای است که مجموع امتیازات حاصل از اولویت‌های گروه‌ها کمینه شود، به این معنی که هر گروه تا حد امکان به اولویت‌های خود نزدیک‌تر باشد.

برای مثال فرض کنید 3 گروه داریم که ترتیب اولویت های آنان به صورت زیر است:

گروه 1:<br>
1.موضوع اول <br>
2.موضوع دوم <br>
3.موضوع سوم <br>

گروه 2: <br>
1.موضوع اول<br>
2.موضوع سوم <br>
3.موضوع دوم <br>

گروه ۳:<br>
1.موضوع سوم <br>
2.موضوع اول <br>
3.موضوع دوم <br>

هدف این است که مجموع امتیازات به کمترین حالت ممکن برسد.

اگر گروه ۱ موضوع اول باشد، گروه ۲ موضوع دوم و گروه ۳ موضوع سوم:<br>
گروه ۱: امتیاز ۱<br>
گروه ۲: امتیاز ۳<br>
گروه ۳: امتیاز ۱<br>
مجموع امتیازات: 1 + 3 + 1 = 5

اگر گروه ۲ موضوع اول باشد، گروه ۳ موضوع دوم و گروه ۱ موضوع سوم:<br>

گروه ۲: امتیاز ۱ <br>
گروه ۳: امتیاز ۳ <br>
گروه ۱: امتیاز ۳ <br>
مجموع امتیازات: 1+3+3 = 7

اگر گروه ۳ موضوع اول باشد، گروه ۱ موضوع دوم و گروه ۲ موضوع سوم:<br>

گروه ۳: امتیاز ۲ <br>
گروه ۱: امتیاز ۲ <br>
گروه ۲: امتیاز ۲ <br>
مجموع امتیازات: 2 + 2 + 2 = 6

درنتیجه در این مثال حالت اول که جمع امتیازات در کمترین حالت خود قرار دارد بهترین حالت است.


حال برای اجرای این الگوریتم ابتدا باید به هر موضوع شماره ای را اختصاص دهیم:
|موضوع|شماره|
|---:|---:|
|روش نوشتن پروپوزال|1|
|نکات قابل توجه قبل ارائه|2|
|نکات قابل توجه در حین ارائه|3|
|روش ساختن اسلاید مناسب|4|
|روش ساختار دادن به مطالب|5|
|روش نوشتن گزارش پیشرفت|6|
|تقلب علمی و مصداق های آن|7|
|روش های ارجاع دهی|8|
|روش های ساخت پوستر|9|

پس از آن باید اولویت بندی هرگروه را طبق شماره های اختصاص داده شده به موضوعات مشخص کرد:
|اولویت ها|گروه|
|---:|---:|
|{1,3,2,4,5,6,7}|1|
|{1,4,2,3,5,7,6,8,9}|2|
|{1,2,3,7,6,9,4,5}|3|
|{1,2,3,4,5,6,7,8}|4|
|{1,2,3,4,5,6,7,8}|5|

در ادامه الگوریتم را اجرا میکنیم و نتیجه به صورت زیر است.


![نتیجه](https://github.com/user-attachments/assets/b2aef9b1-23fb-498b-a13b-643951d8fa3f)
