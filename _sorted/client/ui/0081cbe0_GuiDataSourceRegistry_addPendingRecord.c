// addr: 0x0081cbe0
// name: GuiDataSourceRegistry_addPendingRecord
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDataSourceRegistry_addPendingRecord(void * name, void * displayName,
   int id_, int a_, int b_, int c_, int d_) */

void GuiDataSourceRegistry_addPendingRecord
               (void *name,void *displayName,int id_,int a_,int b_,int c_,int d_)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an 0x50-byte record with two IString fields, copies string/id
                       inputs and four extra fields, then appends it to a list. Exact registry/list
                       class is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156a1eb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x50);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (local_10 != (void *)0x0) {
    pvVar2 = (void *)FUN_0081b680(uVar1);
  }
  local_4 = 0xffffffff;
  local_10 = pvVar2;
  FUN_00402ce0(name);
  FUN_00402ce0(displayName);
  FUN_004d93dc(id_);
  *(int *)((int)pvVar2 + 0x40) = a_;
  *(int *)((int)pvVar2 + 0x44) = b_;
  *(int *)((int)pvVar2 + 0x48) = c_;
  *(int *)((int)pvVar2 + 0x4c) = d_;
  FUN_00819c70(&local_10);
  ExceptionList = local_c;
  return;
}

