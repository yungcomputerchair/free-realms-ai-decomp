// addr: 0x012dbd60
// name: PropertyNameVectorTree_findOrInsert
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall PropertyNameVectorTree_findOrInsert(void *param_1,int param_2)

{
  void *key_string;
  void *hint_tree;
  int iVar1;
  void *hint_node;
  undefined4 *puVar2;
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Finds a string-keyed node by comparing the input name to node strings; if
                       absent it constructs and inserts a new vector-valued node, returning the node
                       value. Evidence is string comparison, vector construction, and tree insert
                       helper calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016711b0;
  local_c = ExceptionList;
  key_string = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_c;
  hint_tree = (void *)FUN_012d75f0(param_2);
  if (param_1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (hint_tree != *(void **)((int)param_1 + 4)) {
    if (*(uint *)((int)hint_tree + 0x24) < 0x10) {
      iVar1 = (int)hint_tree + 0x10;
    }
    else {
      iVar1 = *(int *)((int)hint_tree + 0x10);
    }
    iVar1 = FUN_00f942a0(0,*(undefined4 *)(param_2 + 0x14),iVar1,
                         *(undefined4 *)((int)hint_tree + 0x20));
    if (-1 < iVar1) goto LAB_012dbe32;
  }
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_4 = 0;
  hint_node = (void *)PropertyNameVectorTreeNodeValue_copyConstruct(param_2,local_48);
  local_4._0_1_ = 1;
  puVar2 = PropertyTree39_insertOrFindStringKey
                     (param_1,local_50,param_1,hint_tree,hint_node,key_string);
  param_1 = (void *)*puVar2;
  hint_tree = (void *)puVar2[1];
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_012d7450();
  local_4 = 0xffffffff;
  if (local_44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
LAB_012dbe32:
  if (param_1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (hint_tree == *(void **)((int)param_1 + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return (int)hint_tree + 0x28;
}

