# Zest Core STM32H753ZI
[Zest Core STM32H753ZI](https://gitlab.com/catie_6tron/zest-core-stm32h753zi-hardware)
custom target for Mbed OS.

## Usage
In your project root directory:

1.  Add the custom target to your project:

    ```shell
    mbed add https://gitlab.com/catie_6tron/zest-core-stm32h753zi.git
    ```

2. Enable the custom target by adding or overwriting the `custom_targets.json` at the
   root of the project:

    ```shell
    cp zest-core-stm32h753zi/custom_targets.json .
    ```

3. Compile for the custom target:

   ```shell
   mbed compile --target ZEST_CORE_STM32H753ZI
   ```
