# carp-physics Examples

## 1. Basic Rigid Body Bounce
A simple example of resolving a collision between a moving dynamic body and a static wall.

```clojure
(load "physics.carp")
(use Solver)
(use Transform)
(use Body)
(use Collision)

(defn resolve-impact [trans body static-trans static-body contact]
  (let [h1 (Handle.init 0u64 1u32)
        h2 (Handle.init 1u64 1u32)
        col (Collision.init h1 h2 contact)]
    (Solver.solve! trans body static-trans static-body &col)))
```

## 2. Friction Simulation
Setting up a collision where friction will slow down an object sliding along a surface.

```clojure
(load "physics.carp")
(use Solver)
(use Body)

(defn setup-friction []
  (let [;; Body with 0.5 friction
        b (Body.new 1.0 0.5 0.5 0.9)
        ;; Static floor with 0.8 friction
        floor (Body.static 0.5 0.8)]
    (do
      (println* "Friction pair established."))))
```

## 3. The Iterative Solver Loop
For stable stacks and multi-point contact, it is recommended to run the solver in multiple iterations per frame.

```clojure
(load "physics.carp")
(use Solver)

(defn solve-world [transforms bodies collisions]
  ;; Standard practice: 8 velocity iterations for stability
  (for [iter 0 8]
    (for [i 0 (Array.length collisions)]
      (let [col (Array.unsafe-nth collisions i)
            ;; Retrieve handles and bodies...
            ]
        (Solver.solve! t-a b-a t-b b-b col)))))
```
