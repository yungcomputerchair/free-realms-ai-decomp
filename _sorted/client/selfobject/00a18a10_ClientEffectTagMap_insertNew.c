// addr: 0x00a18a10
// name: ClientEffectTagMap_insertNew
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientEffectTagMap_insertNew(void * this, uint id_) */

void __thiscall ClientEffectTagMap_insertNew(void *this,uint id_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates a ClientEffectTag with the supplied id and inserts it into the
                       0x14-bucket effect/tag map. Type evidence comes from
                       ClientEffectTag_ctorWithId. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015ae551;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientEffectTag_ctorWithId(pvVar1,(uint *)id_);
  }
  uStack_4 = 0xffffffff;
  FUN_00a166c0(pvVar1);
  ExceptionList = local_c;
  return;
}

