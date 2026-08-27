# carp-physics

A modular, high-performance 3D impulse solver for the [Carp](https://github.com/carp-lang/Carp) programming language.

This library is the "Verb of Interaction" in the modular physics stack. It takes collision data and dynamic states to calculate the impulses and positional corrections needed to resolve physical impacts.

## Features
- **Impulse-Based Resolution**: Textbook implementation of the Sequential Impulse (SI) method for rigid body collisions.
- **Coulomb Friction Model**: Realistic lateral resistance with correct clamping ($|j_t| \le j \cdot \mu$).
- **Baumgarte Stabilization**: Built-in positional correction with configurable slop to prevent "sinking" and jitter.
- **Library Agnostic**: Orchestrates data between `carp-transform`, `carp-dynamics`, and `carp-collision` without tight coupling.
- **Stability First**: Built-in guards for division-by-zero (Static vs Static) and NaN protection for tangent math.

## Installation
```clojure
(load "https://github.com/sqrew/carp-physics@master")
```


## Examples

See [examples.md](examples.md) for usage examples.
## The Modular Stack
`carp-physics` is designed to be the consumer of the following libraries:
1. **`carp-transform`**: Authoritative spatial state.
2. **`carp-dynamics`**: Newtonian integration and damping.
3. **`carp-collision`**: Narrow-phase manifold generation.

## License
MIT
