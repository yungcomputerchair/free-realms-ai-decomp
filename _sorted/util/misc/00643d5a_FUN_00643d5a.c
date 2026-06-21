// addr: 0x00643d5a
// name: FUN_00643d5a
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_00643d5a(int param_1,int *param_2,int param_3,undefined4 param_4,int *param_5,uint param_6,
            uint param_7)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int local_3c [4];
  undefined1 *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
                    /* Initializes a bitmap/button-control base region: stores color/flag fields,
                       sets up wrapper state, allocates/accesses bitmap helpers, and manages a
                       reference-counted object. Used by GButton/GCheckBox/GRadio constructors, but
                       exact class is unclear. */
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(uint *)(param_1 + 0xec) = param_7 & 0xffffff;
  *(uint *)(param_1 + 0xf0) = param_6;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  *(uint *)(param_1 + 0xe8) = param_6;
  local_1c = &LAB_0060e4ec;
  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xec) | 0x80000000;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x20;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0xf8) = param_4;
  (**(code **)(*(int *)(param_1 + 0x108) + 0x10))(param_1,&LAB_0060e4ec,0,0,0);
  if (param_2 != (int *)0x0) {
    (**(code **)(*(int *)(param_1 + 0x108) + 0x20))(param_2,1);
  }
  if (param_3 != 0) {
    param_2 = Mem_Alloc(0x28);
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
    }
    else {
      FUN_0041493a();
      *param_2 = (int)GBitmapAccessWrapper::vftable;
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_1c = &LAB_0060e51c;
    (**(code **)(*param_2 + 0x10))(param_1,&LAB_0060e51c,0,0,0);
    (**(code **)(*param_2 + 0x20))(param_3,1);
    pvVar1 = Mem_Alloc(0xc);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_0062540a();
    }
    local_c = 0;
    *(void **)(param_1 + 0x130) = pvVar1;
    local_8 = param_2;
    FUN_0062d853(&local_18,&local_c);
  }
  if (param_5 == (int *)0x0) {
    if ((param_6 & 3) == 0) {
      return;
    }
    iVar2 = FUN_004d9d8a(0x3c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00526874(param_4,param_1);
    }
    if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xfc) + 0x10))(0);
    }
    piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x14U);
    *(int **)(param_1 + 0xfc) = piVar3;
  }
  else {
    (**(code **)(*param_5 + 0xc))();
    if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xfc) + 0x10))(0);
    }
    *(int **)(param_1 + 0xfc) = param_5;
    (**(code **)(*param_5 + 0x38))(param_1,&DAT_01bc7ec0);
    piVar3 = *(int **)(param_1 + 0xfc);
  }
  local_3c[1] = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_3c[2] = 1;
  local_1c = &LAB_0060e56c;
  local_2c = &LAB_0060e56c;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_3c[0] = param_1;
  (**(code **)(*piVar3 + 0x58))(local_3c);
  return;
}

