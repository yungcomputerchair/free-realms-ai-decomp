// addr: 0x0065ceea
// name: FUN_0065ceea
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_0065ceea(int *param_1,int param_2,int param_3,int *param_4,int *param_5,byte param_6)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int *offset_;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  
                    /* Updates a resource/control layout record: stores dimensions/offsets from
                       input rectangles, sets flag bits, and updates ResourceOffsetTable entries. No
                       exact class/method evidence, so left unnamed. */
  param_1[0x3a] = param_1[0x3a] | (uint)param_5;
  FUN_0042280f(0);
  FUN_0040f97f(0);
  piVar3 = param_4;
  param_1[0x42] = param_2;
  param_1[0x43] = param_3;
  iVar4 = param_4[1];
  param_1[0x44] = *param_4;
  param_1[0x45] = iVar4;
  if ((*(byte *)(param_1 + 0x4b) & 1) == 0) {
    iVar4 = param_4[1];
  }
  else {
    iVar4 = *param_4;
  }
  param_5 = (int *)0x0;
  param_1[0x4e] = iVar4;
  param_1[0x4f] = param_3 - iVar4;
  piVar1 = param_1 + 9;
  (**(code **)(*piVar1 + 0x18))(DAT_01bdac78,piVar1,&param_5);
  offset_ = param_5;
  uVar2 = DAT_01bdd4e4;
  if (param_5 == (int *)0x0) {
    param_4 = (int *)0x0;
    (**(code **)(*piVar1 + 0x18))(DAT_01bd970c,piVar1,&param_4);
    offset_ = param_4;
    uVar2 = DAT_01bddd18;
    if (param_4 == (int *)0x0) goto LAB_0065cfae;
  }
  ResourceOffsetTable_setEntryOffset(param_1,(uint)uVar2,(uint)offset_);
LAB_0065cfae:
  if ((param_6 & 1) == 0) {
    local_8 = DAT_01bdbad0;
    local_20 = param_2;
    local_1c = param_3;
    local_18 = *piVar3;
    local_14 = piVar3[1];
    local_24 = 0;
    local_c = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x110))(&local_24);
    if ((local_24 & 0x24924) != 0) {
      FUN_004d93a3();
    }
  }
  return 1;
}

