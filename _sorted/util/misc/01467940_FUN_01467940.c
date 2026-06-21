// addr: 0x01467940
// name: FUN_01467940
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01467940(int *param_1)

{
  int *piVar1;
  
                    /* Runs a state-machine transition/action path by invoking virtual callbacks,
                       retrieving state-machine context, invoking a virtual method, and returning
                       status 2. Exact method name not evident. */
  (**(code **)(*param_1 + 0x4c))();
  (**(code **)(*param_1 + 0x88))();
  piVar1 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar1 + 0x17c))();
  return 2;
}

