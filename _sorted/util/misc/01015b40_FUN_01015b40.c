// addr: 0x01015b40
// name: FUN_01015b40
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_01015b40(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4,void *param_5,
            void *param_6,void *param_7)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a larger gameplay/UI object graph: allocates 0x68 and 0x1b8-byte
                       structures, validates parameters, initializes state, and inserts into owner.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163449e;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  pvVar3 = Mem_Alloc(0x68);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_007039b0(uVar2);
  }
  local_4 = 0xffffffff;
  cVar1 = FUN_00703e10(param_2,3,1);
  if (cVar1 == '\0') {
    if (pvVar3 != (void *)0x0) {
      FUN_00703a30();
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    uVar4 = 0xfffffffe;
  }
  else {
    FUN_00702f60(local_2c);
    pvVar5 = Mem_Alloc(0x1b8);
    local_4 = 1;
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_01014390(param_3);
    }
    local_4 = 2;
    CharacterCustomization_setAppearanceResources
              ((void *)(iVar6 + 0x18),param_4,param_5,param_6,param_7);
    param_1[0x1a] = (int)pvVar3;
    param_1[0x1e] = local_24;
    param_1[0x1f] = local_20;
    param_1[0x20] = local_1c;
    param_1[0x21] = local_18;
    if (*param_1 != 0) {
      FUN_010156a0(*param_1);
      *param_1 = 0;
    }
    *param_1 = iVar6;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    if (*(int *)(iVar6 + 0x80) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(ushort *)(*(int *)(iVar6 + 0x80) + 0x74);
    }
    param_1[0x34] = uVar2;
    param_1[0x35] = 0;
    uVar4 = 0;
  }
  ExceptionList = local_c;
  return uVar4;
}

