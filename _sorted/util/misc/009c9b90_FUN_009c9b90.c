// addr: 0x009c9b90
// name: FUN_009c9b90
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_009c9b90(int *param_1)

{
                    /* Destructor/cleanup that unlinks two intrusive list nodes, releases the
                       primary object, destroys both list helper objects, and clears pointers. No
                       class evidence, so left unnamed. */
  FUN_00acb430(param_1[3]);
  FUN_00acb430(param_1[4]);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
    *param_1 = 0;
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  param_1[3] = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  param_1[4] = 0;
  return;
}

