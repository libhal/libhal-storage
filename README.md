# libhal-storage

[![✅ Checks](https://github.com/libhal/libhal-storage/actions/workflows/ci.yml/badge.svg)](https://github.com/libhal/libhal-storage/actions/workflows/ci.yml)
[![GitHub stars](https://img.shields.io/github/stars/libhal/libhal-storage.svg)](https://github.com/libhal/libhal-storage/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/libhal/libhal-storage.svg)](https://github.com/libhal/libhal-storage/network)
[![GitHub issues](https://img.shields.io/github/issues/libhal/libhal-storage.svg)](https://github.com/libhal/libhal-storage/issues)

libhal compatible device library for the storage family of devices.

## 🏗️ Building Demos

To build demos, start at the root of the repo and execute the following command:

```bash
conan build demos -pr lpc4078 -pr arm-gcc-12.3
```

or for the `lpc4074`

```bash
conan build demos -pr lpc4074 -pr arm-gcc-12.3
```

or for the `stm32f103c8`

```bash
conan build demos -pr stm32f103c8 -pr arm-gcc-12.3
```

## 📦 Building The Library Package Demos

To build demos, start at the root of the repo and execute the following command:

```bash
conan create . -pr lpc4078 -pr arm-gcc-12.3 --version=latest
```

To compile the package for the `stm32f103c8` or `lpc4074`, simply replace the `lpc4078` profile with the appropriate profile name. For example:

```bash
conan create . -pr stm32f103c8 -pr arm-gcc-12.3 --version=latest
```

> [!NOTE]
> If you are developing the code, and simply need to test that it builds and
> that tests pass, use `conan build .` vs `conan create .`. This will build the
> package locally in the current directory. You'll find the contents in the
> `build/` directory at the root of the repo. Now links will point to the code
> in the repo and NOT the conan package directory.

## 📋 Adding `libhal-storage` to your project

Add the following to your `requirements()` method within your application or
library's `conanfile.py`:

```python
    def requirements(self):
        self.requires("libhal-storage/[^1.0.0]")
```

Replace version `1.0.0` with the desired version of the library.

Assuming you are using CMake, you'll need to find and link the package to your
executable:

```cmake
find_package(libhal-storage REQUIRED CONFIG)
target_link_libraries(app.elf PRIVATE libhal::storage)
```

Replace `app.elf` with the name of your executable.

The available headers for your app or library will exist in the
[`include/libhal-storage/`](./include/libhal-storage) directory.

## Contributing

See [`CONTRIBUTING.md`](CONTRIBUTING.md) for details.

## License

Apache 2.0; see [`LICENSE`](LICENSE) for details.
