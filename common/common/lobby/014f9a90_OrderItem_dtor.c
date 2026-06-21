// addr: 0x014f9a90
// name: OrderItem_dtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OrderItem_dtor(void * this) */

void __fastcall OrderItem_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructs an OrderItem by restoring OrderItem vtables, releasing an owned
                       object at offset 8, then destroying the Sortable/Persistent bases. The class
                       name is taken from direct vtable assignments. */
  puStack_8 = &LAB_016b3157;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = OrderItem::vftable;
  *(undefined4 *)((int)this + 4) = OrderItem::vftable;
  local_4 = 1;
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 8))(1,uVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  Sortable_dtor((undefined4 *)((int)this + 4));
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

