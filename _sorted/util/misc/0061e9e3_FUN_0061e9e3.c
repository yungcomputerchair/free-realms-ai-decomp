// addr: 0x0061e9e3
// name: FUN_0061e9e3
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0061e9e3(int param_1,int *param_2,uint param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  
                    /* Initializes table/tree control state: clears flag bits, creates an internal
                       0x50 helper object, stores masked color/state values, and manages a
                       reference-counted pointer. No method name evidence, so left unnamed. */
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xff7fffff;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) & 0xff7fffff;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  pvVar1 = Mem_Alloc(0x50);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00699aef(param_1);
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar2;
  *(uint *)(param_1 + 0x1c8) = param_3 & 0xfffffff;
  *(uint *)(param_1 + 0x1cc) = param_3 & 0xfffffff | 0x80000000;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  if (*(int **)(param_1 + 0x1d0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d0) + 0x10))(0);
  }
  *(int **)(param_1 + 0x1d0) = param_2;
  piVar3 = (int *)(*(int *)(param_1 + 0x1d4) + 0x2c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  if (*(int **)(param_1 + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c4) + 0x10))(0);
  }
  *(int **)(param_1 + 0x1c4) = piVar3;
  FUN_00617021(0,1);
  FUN_00663fe7();
  return;
}

