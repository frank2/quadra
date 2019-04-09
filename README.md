# Quadra
## wat

Let me take you on a weird adventure.

While out on a boat on Lake Shasta, I got really bored. So I started thinking: hmmmm. Why doesn't logic allow for a contradictory state? Apparently, this is what happens when I'm sober and sitting on a lake doing absolutely nothing at all, nope, nothing here.

I actually never took a swing at implementing this because I thought it was absolutely stupid. It makes no sense--yet at the same time it does! So. I don't know, man. It's weird. See if you can follow along with my painful logic.

## Logic

Welcome to my weird math. This is not really supposed to make sense, but for some reason, it makes sense. It's really stupid and literally defies the concept of logic. It's "made up" so to speak, so it doesn't really mean anything. Don't read too much into it. But be warned! It's weird!

Because we've introduced two states into a binary system, we now have a *quadrary* system, in which there are not just two states, but rather, four states. Though they can still be represented in the traditional binary fashion.

Qubit Value | Qubit Label
----------- | -----------
{0} | {N} nothing
{1} | {F} false
{2} | {T} true
{3} | {C} contradiction

I wonder if this is just a probability system. Boolean logic doesn't seem to work all that cleanly with how it relates to contradictions. It's like the answer to the "is the glass half-full or half-empty" question. All that question does is attempt to measure whether you're an optimist or pessimist. Yet, the question is misleading, because the glass is in a permanent state of being full because there's no concept of a void in our minds. So we can't technically perceive that which we can't see. By the way, spoilers: the glass is always full of air. Oxygen. A million pairings of two hydrogen atoms and an oxygen atom. Again, we cannot perceive the concept of nothing.

There's some strange human tendency to want to simply pick one or the other. To demand a decision of sorts. What if it's not necessarily decidable? Perhaps computation should also contain a statistical system of sorts?

Whatever's going on in this language I have no clue, but it's really fun to write.

Truth Table (NOT) | {~}
----------------- | ---
**N** | C
**F** | T
**T** | F
**C** | N

The NOT table seems to work exactly how you'd expect it to.

The inverse of nothing is effectively everything. Yet, everything is a contradiction-- it contains true as well as false by definition, not to mention what's in everything is also nothing, so the opposite of nothing then is everything, which is a contradiction, as it also contains nothing.

Not false is true, not true is false. This is pretty simple.

Whereas the concept of everything is a contradiction (lol), the inverted concept of everything is technically nothing. That's to be a total didactic dumbass and simply restate not two paragraphs ago: the inverse of everything is effectively nothing.

...wait, can you even negate the concept of "everything"? That's still tripping me up. I have no clue why.

Truth Table (OR) {\|} | **N** | **F** | **T** | **C**
-------------------- | - | - | - | ---
**N** | N | F | T | C
**F** | F | F | T | C
**T** | T | T | T | C
**C** | C | C | C | C

Nothing or something is always that something. as when something isn't there, that's only when you know it's nothing. But nothing is, in fact, something-- the inversion of a contradiction, which is nothing, which is itself a contradiction, but from a different perspective. Syllables, right? Wow.

False or false is false, false or true is true, but false or a contradiction is a contradiction, because a contradiction is simultaneously false and true.

True or nothing is true, true or false is true, true or true is true, and true or a contradiction is a contradiction.

Anything or a contradiction is always a contradiction.

Truth Table (AND) {&} | **N** | **F** | **T** | **C**
--------------------- | - | - | - | ---
**N** | N | F | T | C
**F** | F | F | F | C
**T** | T | F | T | C
**C** | C | C | C | C

If you have nothing and something, it's always that something, in the same sense that a contradiction and something is always a contradiction. The traditional boolean truth table is untouched.

Truth Table (XOR) {x} | **N** | **F** | **T** | **C**
--------------------- | - | - | - | ---
**N** | N | F | T | C
**F** | F | N | T | T
**T** | T | T | N | F
**C** | C | T | F | N

The "exclusive-or" table is pretty much the same, with exclusion being taken into account with regards to
contradictions and nothingness.

With two sets of nothing, the ultimate exclusive content is nothing, as nothing is nothing no matter what. However, performing an XOR operation on nothing and something, since it's still an OR operation, will result in that something. Though do consider, in the same sense that `3 {x} 2 == 1` (because `0b11 {x} 0b10 == 0b01`), XORing a contradiction with anything will result in that something's inversion. In effect, for a given state Y, `C {x} Y` is the equivalent of `~Y`. Additionally, in the same sense that `2 {x} 2 == 0` (because `0b10 {x} 0b10 == 0b00`), `F {x} F == N`, because falsehoods are something as opposed to nothing, and thus produce nothing when excluded from one another.

I think we can get to weird math now-- that was just weird boolean logic (which I guess is actually quadrean logic).

## Weird Mathematics

Before we start with the weird math, though, we need to understand the concept of *polarization*, which is similar to polarization in traditional mathematics.

### Polarity

In traditional mathematics there are what are considered two poles-- positive and negative. with, weirdly, 0 not being allowed to contain any polarization, which is what always made 1's compliment so funny, because in 1's compliment of binary, there's technically a negative 0 and a positive 0.

In my absolutely idiotic math, in fact, there are *four poles* with a transitional state of nothingness between all of them.

```
               +---------------+
               | X / Crossed   |
+--------------+---------------+--------------+
| - / Negative | N / Nothing   | + / Positive |
+--------------+---------------+--------------+
               | V / Divergent |
               +---------------+
```

When a number is polarized in one way or another, performing an operation with a polarized version of itself does not necessarily result in an inversion of itself. For example, traditionally, `-6 {*} -6` would be the equivalent of `6 {*} 6`, because "a negative times a negative equals a positive." In this system, a negative times a negative is technically still a *negative*, in the same sense that a positive times a positive is always a *positive*. This works transitively across the poles: a crossed times a crossed is a crossed number, a divergent number times a divergent number is, again, a divergent number.

A crossed polarization is quite literal-- a hypothetical state in which the number is both positive and negative. Its opposite is divergent-- a contradiction of polarization, in which the number is polarized but not polarized, or rather, the polarization is known to exist, but is inconclusive. I still have no fucking clue where these in particular will lead. Nothing is still unsigned-- though not because it's impossible, but more because it's superfluous. Everything leads to nothing. `x0` is equal to `+0` because unlike other values, 0 is the same value across all poles.

With that in mind, let's cover numbers and mathematics.

## Addition and Subtraction

Addition and subtraction works the same way, so long as you respect the polarization of numbers.

Let's walk through some basic addition exercises.

### `n1 {+} n1 = n2`

So, technically, these would be hypothetical numbers because they are all contradictions. `n0` is superfluous, but `n1` is not a number, because by definition of it being 1, it's officially something, making it not nothing. You add one nothing to another nothing, and you get two nothings, even if it's nothing. You have two of them, after all! Two nothings. Which is still nothing, isn't it?

#### `+1 {+} -1 = 0`

Because `+` and `-` are opposing operators, result is a sort of cancellation of energy at the fulcrum, as `+1` and `-1` are perfectly opposed energies, resulting in nothing. In traditional mathematics, this is equivalent to the statement "1 - 1 = 0," though in a really stupid and excitingly autistic way, this feels really fun, verbose and clear.
 
### `+5 {+} -2 = +3`

Since `+` and `-` are opposing poles, they can still be added together to get opposing effects. For example, in traditional mathematics, 5 - 2 is 3, just as in this situation here. The same rules apply when adding `x` and `v` polarized numbers. However, answers become complicated when adding across polarities.

### `+5 {+} x2 {+} -7 {+} v8 {+} n4 = (n4, -2, v6)`

PEMDAS rules still apply for some reason. Why? I have no clue. I'm literally just making all of this up as I go along and spitballing what feels right. I'm trying to throw down nonsense proofs, but, let's face it folks, I'm just leading you in a circle with every "proof" I offer you.

So we can actually evaluate the problem like this.

### `[[[[+5 {+} x2] {+} -7] {+} v8] {+} n4] = (n4, -2, v6)`

So, step by step, `+5 {+} x2 = (+5, x2)`. Meaning, we can add the tuple `(+5, x2)` to the resulting formula, since this chunk can't yet resolve.

### `[[[(+5, x2) {+} -7] {+} v8] + n4] = (n4, -2, v6)`

The result of `(+5, x2) {+} -7` is ultimately `(-2, x2)`, because only opposing polarity can be added together. Then, recycle your data:

### `[[(-2, x2) {+} v8] {+} n4] = (n4, -2, v6)`

`v` polarizes `x`, so now we have a tuple of the value `(-2, v6)`. Plug that back into our formula and we get this.

### `[(-2, v6) {+} n4] = (n4, -2, v6)`

Because `n4` is not technically a number, it cannot be resolved, and thus this formula cannot be resolved any further. And so, the answer to this formula is the triplet of `(n4, -2, v6)`. Yet, of course, anything that is nothing is superfluous unless you're measuring nothing for some weird reason, so, really, the answer is `(-2, v6)`. I guess. I don't know. Again, I'm literally just throwing nonsense out here.

Boy I hope you're ready for the next one. Subtraction can be weird.

In the same sense that addition (namely, the `{+}` operator) can be considered "going forward," the `{-}` operator can be considered "going backward." Instead, though, you should consider the two operators trending operators rather than addition operators.

When you use the `{+}` operator, you are actually causing the resultant formula to trend toward whichever polarization you added. For example, if you add `+2` to `+4`, you trend `+4` further toward positive infinity by a degree of whatever `+2+ represents. The subtraction operator works in the opposing direction.

### `+2 {-} +4 = -2`

Here, the formula is causing `+2` to trend toward negative infinity by a factor of `+4`. You could say that the `{-}` operator has a sort of inversion effect, in which a positively charged number causes you to step backward and a negatively charged number causes you to step forward. For example.

### `+2 {-} -4 = +6`

This is basically the formula requesting you perform a moonwalk. From `+2`, go backward `-4` steps, which, a double negative results in a positive with this operator, so `{-}` with anything charged negative is the equivalent of performing `{+}` on its positive.

## Multiplication and Division

Multiplication becomes a little strange because all the operators actually have different meanings, and technically all perform the same operation if you understand the formula. Consider the multiplication formula.

### `b {*} i = P`

This formula can be rearranged in a variety of ways to come up with the same answer. For example, to acquire the product *P* is obvious, but what about acquiring the iterations *i*? Then, the formula is rearranged as such.

### `P {/} b = i`

This acquires the amount of iterations necessary to get to *P* from 0 with an additive base of *b*. The same could be said for acquiring the base based on the iterations, like so.

### `P {/} i = b`

Now, this formula and its variables all have a very specific meaning here. All but one variable has been named, which will be revealed with the third operator that functions with all of this comes to light. So, the base variable *b* is added to 0 at *i* iterations. For example, `+2 {*} +2` actually evaluates out to `+2 {+} +2` with *b* as `+2` and *i* as `+2`. When you make the formula `+3 {*} +5`, it becomes more clear, with *b* mapped to `+3` and *i* mapped to `+5`, producing a `P` value of `+15`.

So, let's plug in these last numbers and see if everything is correct.

### `b {*} i = P` == `+3 {*} +5 = +15`
### `P {/} b = i` == `+15 {/} +3 = +5`
### `P {/} i = b` == `+15 {/} +5 = +3`

Transitivity works well with multiplication, but just as it does with subtraction and addition that doesn't necessarily carry over. `b {*} i` == `i {*} b`, yet `P {/} b` != `b {/} P`. Now, before we cover division, we have to get to a curiosity of this system, in which multiplication and division are performed via more simplified operators.

For example: if you take base *b* as any number and iterations *i* as 0, *P* is actually 0. This is known and understandable-- the same could be said of `+0 {*} +3`, which would also be 0. However, an oddity arises in this system, in which every number is technically divisable by 0. The problem is, however, is that it results in infinity.

If we assume *b* as `+3` and *i* as `+0`, then we get a *P* `+0`. Therefore, if we plug these variables back into our divisors, we get `+0 {/} +3`, which correlates to `P {/} b`. The answer we should get, therefore, is `+0`. This is consistent with modern mathematics. However, we get into problematic territory when we instead use the `P {/} i` form, in which it resolves to `+0 {/} +0`.

What's happening in this formula is the opposite of what happens in multiplication. Whereas multiplication uses addition from a base operator to get to an answer, a division uses a base product and another operator in order to go backwards within the multiplication operation. To understand, let's evaluate the following: `+5 {*} +3`. This becomes the following formula.

### `+0 {+} +5 {+} +5 {+} +5`

This, of course, resolves to `+15`. On the other hand, division works more like this. Let's say we're working with `+15 {/} +3`. So, with what we know of multiplication, we can sort of work backwards. We know this formula actually looks like this: `b {*} i = P`. One of these is *b* or *i* with `+15` obviously being *P*. So now, our inverted formula looks like so, depending on which choice we take. I've chosen to assume one of the operators is the base, since it results in similarly parallel answers anyway. So now we have this: `+3 {*} i = +15`.

What makes multiplication different from addition and subtraction is that it's a functional operation. Whereas the `{+}` operator quite literally means "put this and this together to make this," multiplication and division are actually asking you to add *b* to an arbitrary base (typically 0) *i* amount of times. In effect, multiplication is a function and not necessarily an operation. So, in order to get that complimentary operator back, we need a divisor operator, which functions similarly to a multiplication operator, but differently.

If `b {*} i = P`, then our missing operator is *i*. So, we need to rearrange the formula to find *i*, which results in this: `b = P {/} i`, which then becomes `b {/} P = 1 {/} i`, which then becomes `P {/} b = i`. Now we can understand what the divisor operator is trying to do.

If `b {*} i = P` represents the number of iterations *i* that must be taken for *b* to become *P* when added to a given base, then *P* divided by *b* must represent the *removal* of certain values over certain iterations. Thus, `P {/} b = i` is asking "how many iterations of subtraction of the value *b* will it take for *P* to reach 0?" When explained this way, the redundancy of the compliment becomes much more clear with the formula `P {/} i = b`: "what base can go *i* iterations being subtracted from the product *P*?" Same question, different perspective, complimentary answers.

Now we understand that the formula `+15 {/} +3` will in fact equal `+5`, but only because `+15 {/} +3` evaluates cleanly into `+15 {-} +3 {-} +3 {-} +3 {-} +3 {-} +3`. The same can be said for its inverse formula `+15 {/} +5`. But what happens when a number does not divide the digit cleanly?

Traditionally interger-based mathematics would tell you to simply "leave a remainder" of sorts, or shift over to floating point arithmetic entirely. Though if we treat the multiplication and division operators more as functions than mathematical operators, we might just get more freedom and leeway out of these. So what happens when we divide a number by 0?

Let's plug into our previous formula, in which the base *b* becomes `+0` and the *P* remains `+15`. That's when we get the formula `+15 {/} +0 = +3`. But clearly, this can't be right. So what happens when we try and evaluate this division in particular?

### `+15 {/} +0 = ?`

If the `{*}` operator is additive traversal, then `{/}` is *negative* traversal. In effect, the division formula asks one of two things: "how many iterations of *b* does it take to get to the product *P*?" or "what base *b* will take *i* iterations to get to product *P*?" Both of which are demostrated here.

### `P {/} b = i`
### `P {/} i = b`

On one hand, let's assume our 0 is actually *b*. So we're looking at answering how many iterations it will take to get from 0 to *P*. Well, if *b* is 0, then the formula lasts forever. Thus, in quadra, a division by 0 results in an infinite answer, whose polarity is dependent on the formula you entered. Therefore, `+15 {/} +0 = +inf`. No matter which form you place this in, you get the same answer.

Conversely, what happens when you plug in *P* as the 0 value? Well, looking at what happens, you get something like `+0 {/} +5`, which essentially asks "how many iterations does it take for base +5 to get to product 0?" Well, the answer is 0-- since 0 is implicitly part of the formula, you've already reached 0 by starting the formula to begin with. Hence, dividing 0 by anything will simply result in 0, but dividing anything by 0 will result in an infinite value skewed in polarity toward whichever rules I make up for polarity or whatever. I don't know. I'm literally just making things up.

Anyway long story short I really need summation functionality under the hood. Is everything seriously just a function of addition and subtraction with functions applied? What the heck.

So what does the division function do when it can't actually reach 0? Well, when it crosses the polarity boundary without reaching 0, it just... gives you the next best number. Kind of like real math. You know, you divide whole numbers and you magically get a remainder. Though technically `{/}` and `{%}` perform the same operation-- you're just getting a different perspective. So perhaps the remainder is the divergent product and the answer is the traditionally polarized result.

So I suppose it's time to forget what I said, because guess what? If this is the same operation performed from different perspectives, then the traditional operators are simply different perspectives of the same equation. Division is perhaps more along the following lines. Whereas `b {*} i` produces *P*, *P* divided by either *b* or *i* technically produces two answers. So, while the multiplication formula can be inverted to produce one of the answers, it doesn't take into account that you technically get two answers out of the process with regards to integer-based mathematics. But `{/}` and `{%}` correspond well to what we know about current math, so what operator should be chosen? Maybe `{$}`?

Let's suss it out.

### `+5 {/} +3 = +1`
### `+5 {%} +3 = +2`
### `+5 {$} +3 = (+1, v2)`

Of course with float-based mathematics this sort of all goes away. `+5.0 {/} +2.0 = +2.5`... I think. I don't know, we'll just have to see when we get there. Either way, this should provide the building blocks for now.

If this makes sense to you, wow. Hats off.
