// addr: 0x00745980
// name: FUN_00745980
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_00745980(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates and initializes a small 0xc-byte primitive/resource node,
                       registers/updates resource accounting, and releases previous payload. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01553a7b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = (**(code **)(*param_2 + 0x98))(uVar1);
  param_1[6] = iVar2;
  param_1[7] = (int)param_2;
  puVar3 = Mem_Alloc(0xc);
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x98))();
    *puVar3 = uVar4;
    puVar3[1] = 0;
    puVar3[2] = 0;
    iVar2 = GraphicsDriver_CommandCall_size();
    FUN_00fac230(iVar2 + 0x1000);
  }
  uStack_4 = 0xffffffff;
  puVar3[2] = *param_1;
  if (*param_1 == 0) {
    param_1[1] = (int)puVar3;
  }
  else {
    *(undefined4 **)(*param_1 + 4) = puVar3;
  }
  param_1[2] = param_1[2] + 1;
  *param_1 = (int)puVar3;
  uVar4 = GraphicsDriver_CommandCall_size();
  FUN_00fac230(uVar4);
  GraphicsDriver_CommandCall_ctorInBuffer(*(undefined4 *)*param_1);
  ExceptionList = unaff_EBX;
  return param_1;
}

