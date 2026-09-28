# Homework 5 · Rule engine lite

**Week 05 · Conditionals**  
**Theme:** The program chooses


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

In the video: at least three runs — one invalid input, one that lands in the `&&` branch, one that lands in the `||` branch. Say which branch will fire before you press Enter.

**Your demo:** https://drive.google.com/file/d/1twi97Nvm8J0A6PQ0Y6nd4UT-J8BVUsDT/view?usp=sharing


## What to build
A small set of rules with an answer for every input. Pass / warn / fail, or admit / waitlist / deny — pick a pair of inputs and a set of rules you can explain out loud. Two inputs change the decision. One branch catches values that make no sense. The README carries a decision table so a grader can check every path without running the program.

The point is not the rules. It is that every input lands in exactly one branch, and you can say which one before you press Enter.

## Requirements
- Two inputs into typed boxes, each with a `cout` prompt before its `cin`. Both inputs appear in at least one condition
- An invalid branch **first**: out-of-range values get their own message before any rule runs (for example `score < 0 || score > 100`)
- Three real outcomes after the invalid branch. At least one `&&` and at least one `||` across the chain
- Braces on every branch. A labeled message printed in every branch
- A comment above the chain that lists your edge values (just below, exactly on, just above each threshold)
- Two comments that explain a choice — why the invalid branch comes first, why one condition is `&&` and not `||`, or why a threshold is `>=` and not `>`. Not `// check score`
- File-top comment with your name and the week
- One `.cpp` that builds with zero errors

## Sample session
```
Score 0-100? 72
Attendance percent? 90
Result: pass
```

```
Score 0-100? 72
Attendance percent? 40
Result: warn — attendance too low
```

```
Score 0-100? -3
Attendance percent? 90
Result: invalid score
```

Your rules and messages can be different. The shape is the same: two inputs, an invalid guard first, then a chain where exactly one branch prints.

## Decision table (fill this in with your rules)
| Score | Attendance | Result |
|------:|-----------:|--------|
| -3 | 90 | invalid score |
| 72 | 90 | pass |
| 72 | 40 | warn — attendance too low |
| 55 | 90 | fail |
| 69 | 90 | ? (your edge) |
| 70 | 90 | ? (your edge) |

One row per path, plus your edge values. The grader reads the table, then runs two rows to check.

## Starter
`main.cpp` — or continue from your Lab 5 file. Either is fine.

## Deliverables
1. Course-visible GitHub repo (link opens)
2. README: how to run + the decision table + one pasted sample run
3. Short demo video: at least three runs — one invalid, one that hits the `&&` branch, one that hits the `||` branch
4. Canvas links

## Scope fence
One file. No loops, no functions, no `switch`, no `if` nested inside an `if`. No boolean golf — if a classmate cannot read a condition aloud, split it into named `bool`s.

## Integrity
- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric
Graded on: it runs, it meets the prompt, every input lands in exactly one branch, the decision table matches the program, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and at least three real runs (invalid, `&&` branch, `||` branch).
5. Paste the video link in the **Demo video** section above.
6. Fill in the decision table above with your rules, then submit your fork URL on Canvas.
