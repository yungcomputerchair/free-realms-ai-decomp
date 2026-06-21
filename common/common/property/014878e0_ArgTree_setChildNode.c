// addr: 0x014878e0
// name: ArgTree_setChildNode
// subsystem: common/common/property
// source (binary assert): common/common/property/ArgTree.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArgTree_setChildNode(void * this, int key, void * childNode) */

void __thiscall ArgTree_setChildNode(void *this,int key,void *childNode)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *key_00;
  int *extraout_EAX;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces the child node stored for a key, deleting any previous child, then
                       clones/inserts the supplied child node. Evidence: ArgTree.cpp assert
                       'childNode', map lookup/erase calls, destructor call on existing node, and
                       allocation/copy construction via 01487770. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a14db;
  local_c = ExceptionList;
  key_00 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  ExceptionList = &local_c;
  if (childNode == (void *)0x0) {
    FUN_012f5a60("childNode","..\\common\\common\\property\\ArgTree.cpp",0xae);
  }
  IntRbTree_lowerBound((void *)((int)this + 0x1c),local_14,&key,key_00);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)((int)this + 0x20);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 0x1c))) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(iVar2 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0x10))(1);
    }
    FUN_014868c0(local_14,pvVar1,iVar2);
  }
  local_14[0] = Mem_Alloc(0x34);
  uVar5 = 0;
  uStack_4 = 0;
  if (local_14[0] != (void *)0x0) {
    uVar5 = ArgTree_cloneNodeRecursive(childNode);
  }
  uStack_4 = 0xffffffff;
  puVar4 = (undefined4 *)ArgTree_getOrCreateChildSlot(&key);
  *puVar4 = uVar5;
  ExceptionList = local_c;
  return;
}

