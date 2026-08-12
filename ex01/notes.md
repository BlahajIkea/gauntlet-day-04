mwong - Python: 

# Why use std::map / standard library map - 

ex01 requires us to look up ID's without using an indexing operator, and we want to store values into keys.

`std::unordered_map` cannot be used due to ex01 needing to be iterated through an ascending order.

`std::multimap` cannot be used either since their key values can overlap and cause duplicates.

Keys with `std::map`'s keys are fully unique and it's keys cannot overlap and have duplicates.