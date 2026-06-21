// addr: 0x009c9600
// name: FUN_009c9600
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_009c9600(int *param_1)

{
                    /* Releases two intrusive list nodes and a primary referenced object, invoking
                       vtable cleanup/destruction and clearing the primary pointer. No class
                       evidence, so left unnamed. */
  FUN_00acb430(param_1[3]);
  FUN_00acb430(param_1[4]);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
    *param_1 = 0;
  }
  return;
}

