// addr: 0x0068aba7
// name: FUN_0068aba7
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_0068aba7(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  
                    /* Copies a large GUI/control style/resource state block from one object to
                       another after validating the source, including colors/flags and
                       reference-counted pointers. No exact class evidence, so left unnamed. */
  cVar3 = FUN_00437372(param_2);
  uVar4 = 0;
  if (cVar3 != '\0') {
    uVar5 = *(uint *)(param_2 + 0xec);
    uVar1 = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xf0) = uVar1;
    *(undefined4 *)(param_1 + 0xe8) = uVar1;
    uVar5 = uVar5 & 0xfffff;
    *(uint *)(param_1 + 0xec) = uVar5;
    *(uint *)(param_1 + 0xf4) = uVar5 | 0x80000000;
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    FUN_00682f44(param_2 + 0x1a4);
    FUN_00682f44(param_2 + 0x1b4);
    piVar2 = *(int **)(param_1 + 0x1c4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(0);
    }
    *(int *)(param_1 + 0x1c4) = 0;
    uVar4 = 1;
  }
  return uVar4;
}

