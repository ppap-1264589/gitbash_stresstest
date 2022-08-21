# gitbash_stresstest

## Hướng dẫn căn bản:
[Stress Test](https://ali-ibrahim137.github.io/competitive/programming/2020/08/23/Stress-Testing.html)

## Trong bộ code trên:

    correct.cpp  : chứa bài làm mà chắc chắn làm đúng
    my.cpp       : chứa bài làm của bạn, có thể đúng hay chưa đúng, để stress test
    generator.cpp: chứa hàm sinh bộ test
    script.sh    : bash script để kết hợp cả 3 file cpp bên trên
  
  4 file trên là một ví dụ cho việc Stress Test bài [VOMARIO](https://oj.vnoi.info/problem/vomario)
  
## Trực quan
Stress Test sẽ chạy không ngừng cho đến khi tìm ra test sai. 

Test đó sẽ có input nằm ở input_file và output nằm ở correctAnswer, trong thư mục chứa project mà bạn đang stress test

## Lưu ý

  Để sử dụng được script.sh, bạn cần tải GitBash về trước: [Link](https://gitforwindows.org)
  
  Đồng thời, tích hợp môi trường MinGW vào Window để GitBash hiểu được lệnh g++: [Tích hợp môi trường MinGW vào Window để biến Sublime Text thành IDE](https://nam.name.vn/huong-dan-bien-sublime-text-thanh-ide-lap-trinh-c-c.html)
  
## Có một số nhược điểm sau cũng nên lưu ý:
  
  - Đi thi chả có ai cho dùng GitBash để Stress Test đâu 
  
  - *(trừ khi mấy kì thi offline, thì có thể làm đủ trò để chắc chắn AC =)) )*
  
  - Để ý có lúc code trâu cũng có thể TLE với chính bộ test mà mình sinh. Nếu code trâu chạy quá lâu, Terminal của GitBash sẽ không có phản ứng gì cả, cần chú ý hiện tượng này để tránh mất thời gian
  
  
