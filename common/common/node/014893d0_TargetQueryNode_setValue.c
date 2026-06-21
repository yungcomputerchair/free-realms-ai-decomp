// addr: 0x014893d0
// name: TargetQueryNode_setValue
// subsystem: common/common/node
// source (binary assert): common/common/node/TargetQueryNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetQueryNode_setValue(void * this, void * value) */

void __thiscall TargetQueryNode_setValue(void *this,void *value)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Validates a non-null value pointer, retains it, and stores it at offset 0x20
                       on TargetQueryNode. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a181b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (value == (void *)0x0) {
    FUN_012f5a60("value","..\\common\\common\\node\\TargetQueryNode.cpp",0x2a,
                 DAT_01b839d8 ^ (uint)&stack0xffffffec);
  }
  pvVar1 = Mem_Alloc(0xc);
  uStack_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_012fa910();
  }
  uStack_4 = 0xffffffff;
  FUN_013010e0(value);
  *(void **)((int)this + 0x20) = value;
  ExceptionList = local_c;
  return;
}

