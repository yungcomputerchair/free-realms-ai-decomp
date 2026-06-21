// addr: 0x01483af0
// name: CampaignScenario_dtor
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CampaignScenario_dtor(void * this) */

void __fastcall CampaignScenario_dtor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys CampaignScenario by resetting its vtable, freeing several
                       small-string buffers when heap-backed, then chaining through
                       PersistentComponent/PersistentBase vtables. */
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_016a0f45;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CampaignScenario::vftable;
  local_4 = 5;
  if (0xf < *(uint *)((int)this + 0xb0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x9c));
  }
  *(undefined4 *)((int)this + 0xb0) = 0xf;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0x9c) = 0;
  local_4 = 4;
  if (0xf < *(uint *)((int)this + 0x94)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x80));
  }
  *(undefined4 *)((int)this + 0x94) = 0xf;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  local_4 = 3;
  if (0xf < *(uint *)((int)this + 0x78)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 100));
  }
  *(undefined4 *)((int)this + 0x78) = 0xf;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x48));
  }
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x40)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = pvVar1;
  return;
}

