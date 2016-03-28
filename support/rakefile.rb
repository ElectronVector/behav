
single_case_expected = %{test_single_case.c: Running Tests...
+ Given: A
 + When: 1
  + Then: a
+ Given: A
 + When: 1

---------------------------------------------------
test_single_case.c: Test Results
---------------------------------------------------
Tested: 1
Passed: 1
Failed: 0
}

clarify_expected = %{test_clarify.c: Running Tests...
+ Given: two positive integers (1)
 + When: they are added together
  + Then: the result is correct
+ Given: two positive integers (1)
 + When: they are added together
  + Then: something else happens
+ Given: two positive integers (1)
 + When: they are multiplied together
  + Then: the value is correct
+ Given: two positive integers (1)
 + When: they are multiplied together

---------------------------------------------------
test_clarify.c: Test Results
---------------------------------------------------
Tested: 3
Passed: 3
Failed: 0
}

task :default do
    run_test "single_case", single_case_expected
    run_test "clarify", clarify_expected
end

def run_test(test_name, expected)
    sh "gcc -W -Wall test_#{test_name}.c -o #{test_name}"
    result = `./#{test_name}`
    puts result
    puts "#{test_name} exited with #{$?.exitstatus}"
    if (result == expected) && ($?.exitstatus == 0)
        puts "******PASS"
    else
        puts "******FAIL"
    end
end