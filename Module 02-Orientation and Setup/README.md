## Date: 27 March, 2025 - Thursday

## 1. Text Instruction

- আজ তোমাদের জন্য বিশেষ একটা দিন। কারন আজ থেকে শুরু হলো তোমাদের প্রোগ্রামিং শেখার জার্নি। অনেক এক্সাইটিং এবং লম্বা একটা জার্নি তবে স্টেপ বাই স্টেপ যদি তুমি আগাতে থাকো তাহলে দেখবা গন্তব্যে চলে আসছো। আজকের মডিউলটা হচ্ছে মূলত ওয়ার্মআপ মডিউল। এজন্য এই মডিউলটা হলো মডিউল নাম্বার শূন্য।

- আজকে কিন্তু আমরা কোন প্রোগ্রামিং করবোনা। আজকে দেখবো ফাইট্রনে প্রোগ্রামিং শেখার জার্নি শুরুর আগে কি কি জিনিসগুলো জানা লাগবে সেগুলো প্লাস প্রোগ্রামিং করার বেসিক টুলস গুলোর সেটাপ। এই দুইটা টপিক মিলিয়ে আজকের ওরিয়েন্টেশন মডিউল কিছুটা বড় হয়েছে। এটা দেখে ঘাবড়ে যাওয়ার কিছু নাই। মেইন মডিউল গুলোতে ১০ টার বেশী ভিডিও থাকবেনা। আজকে যাস্ট তোমার কাজ হলো সেটাপ গুলো ঠিকমতো করা। এবং কোন প্রবলেম ফেইস করলে গ্রুপে অথবা সাপোর্ট সেশনের মাধ্যমে হেল্প নেওয়া। আর অবশ্যই ফাইট্রনের সম্পূর্ণ সিস্টেম নিয়ে যে আইডিয়া দেওয়া হয়েছে সেগুলো ভালোভাবে মনে রাখতে হবে।

- সো তোমাদের প্রত্যেকের জন্য শুভ কামনা। সিরিয়াসলি এবং সিনসিয়ারলি শুরু করে দাও। এবং নিজের সাথে ওয়াদা করো যতো যা কিছুই আসুক এই একটা বছর আমি লেগে থাকবো। আর মনে রাখবে যে চেষ্টা করে সে হেরে যায়না। তুমি ডেডিকেটেড ভাবে আমাদের দেখানো রাস্তায় পরিশ্রম করতে থাকো। যাত্রার শেষে বিজয়ের হাসিটা একসাথেই আমরা হাসবো।

## 2. Course urriculumn and weekly module release days

- Weekly 4 days class. Days - saturday, sunday, tuesday, thursday.
- Thursday wil be get assignment or exam. Like midterm, class test or final exam.
- Semester break 7 days and cover to all topics.

## 3. Build a routine and adjust a routine besed on your life situation

- 24 hours divided by 3 = 8.
- Routine type = job holder, student and single person.

## 4. Overview of exams deadline and marks

- Task submit to 24 hours on-time then marks will get 100%.
- Marks system are 100%, 90% and 80%.
- Copy for learn and practice not examination.

## 5. Six ways to get support from phitron

- Try to 1-2 hour problem solve. Otherwise go to help desk.
- Search related problem in phitron help desk.
- Post to your problem with full screenshot.
- Check to support season schedule.
- A mentor.
- With phone call or email.

## 6. Five things you need to do to get best out of Phitron

- No sacrifice no gain. Likes- hangout, chilling, wasting time and others.
- Make a dynamic routine. Still 1-2 week workable not for life time.
- Mood swing likes- up and down. Coutinue with struggle and challenge, never give up.
- Use to AI then you will banned.
- Data structure and algorithm is more important with problem-solving.

## 7. Setup resources

- Download and install VSCode.
- Download and install Git.
- Download and install MinGW.
- Settings.json for Windows:

  ```
  {
  "C_Cpp.default.cppStandard": "c++20",
  "C_Cpp.default.cStandard": "c11",
  "terminal.integrated.defaultProfile.windows": "Git Bash",
  "code-runner.runInTerminal": true,
  "code-runner.saveAllFilesBeforeRun": true,
  "code-runner.terminalRoot": "/",
  "code-runner.executorMapByGlob": {

      "pom.xml": "cd $dir && mvn clean package"
  },
  "code-runner.executorMap": {


      "javascript": "node",
      "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
      "zig": "zig run",
      "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
      "php": "php",
      "python": "python -u",
      "perl": "perl",
      "perl6": "perl6",
      "ruby": "ruby",
      "go": "go run",
      "lua": "lua",
      "groovy": "groovy",
      "powershell": "powershell -ExecutionPolicy ByPass -File",
      "bat": "cmd /c",
      "shellscript": "bash",
      "fsharp": "fsi",
      "csharp": "scriptcs",
      "vbscript": "cscript //Nologo",
      "typescript": "ts-node",
      "coffeescript": "coffee",
      "scala": "scala",
      "swift": "swift",
      "julia": "julia",
      "crystal": "crystal",
      "ocaml": "ocaml",
      "r": "Rscript",
      "applescript": "osascript",
      "clojure": "lein exec",
      "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
      "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
      "racket": "racket",
      "scheme": "csi -script",
      "ahk": "autohotkey",
      "autoit": "autoit3",
      "dart": "dart",
      "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
      "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
      "haskell": "runghc",
      "nim": "nim compile --verbosity:0 --hints:off --run",
      "lisp": "sbcl --script",
      "kit": "kitc --run",
      "v": "v run",
      "sass": "sass --style expanded",
      "scss": "scss --style expanded",
      "less": "cd $dir && lessc $fileName $fileNameWithoutExt.css",
      "FortranFreeForm": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
      "fortran-modern": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
      "fortran_fixed-form": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
      "fortran": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
      "sml": "cd $dir && sml $fileName",


      //WITHOUT TEXT FILE


      "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt.exe && $dir$fileNameWithoutExt.exe",
      "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt.exe && $dir$fileNameWithoutExt.exe",


      //WITH TEXT FILE

      // "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt.exe && timeout 15s $dir$fileNameWithoutExt.exe < input.txt > output.txt || (echo -n > output.txt && echo 'Time Limit Gone')",
      // "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt.exe && timeout 15s $dir$fileNameWithoutExt.exe < input.txt > output.txt || (echo -n > output.txt && echo 'Time Limit Gone')",



  },

  "window.zoomLevel": 1,
  "files.autoSave": "afterDelay",

  }
  ```

- Settings.json for Mac:

  ```
   {
     "workbench.colorTheme": "Default Dark Modern",
     "github.copilot.editor.enableAutoCompletions": true,
     "security.workspace.trust.untrustedFiles": "open",
     "code-runner.executorMap": {

         "javascript": "node",
         "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",

         //with input and output text file
         //"c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && (timeout 15s $dir$fileNameWithoutExt < input.txt > output.txt || (echo -n > output.txt && echo 'Time Limit Gone'))",
         //"cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && (timeout 15s $dir$fileNameWithoutExt < input.txt > output.txt || (echo -n > output.txt && echo 'Time Limit Gone'))",

         //without input and output text file
         "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
         "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",


         "zig": "zig run",
         "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
         "php": "php",
         "python": "python -u",
         "perl": "perl",
         "perl6": "perl6",
         "ruby": "ruby",
         "go": "go run",
         "lua": "lua",
         "groovy": "groovy",
         "powershell": "powershell -ExecutionPolicy ByPass -File",
         "bat": "cmd /c",
         "shellscript": "bash",
         "fsharp": "fsi",
         "csharp": "scriptcs",
         "vbscript": "cscript //Nologo",
         "typescript": "ts-node",
         "coffeescript": "coffee",
         "scala": "scala",
         "swift": "swift",
         "julia": "julia",
         "crystal": "crystal",
         "ocaml": "ocaml",
         "r": "Rscript",
         "applescript": "osascript",
         "clojure": "lein exec",
         "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
         "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
         "racket": "racket",
         "scheme": "csi -script",
         "ahk": "autohotkey",
         "autoit": "autoit3",
         "dart": "dart",
         "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
         "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
         "haskell": "runghc",
         "nim": "nim compile --verbosity:0 --hints:off --run",
         "lisp": "sbcl --script",
         "kit": "kitc --run",
         "v": "v run",
         "sass": "sass --style expanded",
         "scss": "scss --style expanded",
         "less": "cd $dir && lessc $fileName $fileNameWithoutExt.css",
         "FortranFreeForm": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
         "fortran-modern": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
         "fortran_fixed-form": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
         "fortran": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
         "sml": "cd $dir && sml $fileName",
         "mojo": "mojo run",
         "erlang": "escript",
         "spwn": "spwn build",
         "pkl": "cd $dir && pkl eval -f yaml $fileName -o $fileNameWithoutExt.yaml",
         "gleam": "gleam run -m $fileNameWithoutExt"
       }
   }
  ```

- VSCode extensions install:
  - C/C++
  - C/C++ Extension Pack
  - C/C++ Compile Run
  - Code Runner
- Test or run the code:
    - Code-1: Paste it and run the code, you will see the result.
        ```
        #include <stdio.h>
        int main(){
            printf("Hello world!");
            return 0;
        }
        ```

    - Code-2: Paste it and run the code, you will see the result.
        ```
        #include <stdio.h>
        int main(){
            int a;
            scanf("%d",&a);
            printf("a = %d",a);
            return 0;
        }
        ```