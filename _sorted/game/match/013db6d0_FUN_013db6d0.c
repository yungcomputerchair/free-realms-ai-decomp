// addr: 0x013db6d0
// name: FUN_013db6d0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void queued_pair_push_threadsafe(int this_, int value_) */

void __thiscall queued_pair_push_threadsafe(void *this,int this_,int value_)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = this_;
                    /* Thread-safe queue push helper: under a critical section it obtains or reuses
                       an 8-byte pair node, writes value into the first slot, appends it to the
                       active vector, releases the lock, and signals an event. Class identity is not
                       evident from callers or strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c52b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  if (this_ != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
    if ((*(int *)((int)this + 0x14) == 0) ||
       (*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2 == 0)) {
      this_ = (int)Mem_Alloc(8);
      local_4 = 0;
      if ((void *)this_ == (void *)0x0) {
        this_ = 0;
      }
      else {
        this_ = FUN_013db9b0(iVar1,0);
      }
      local_4 = 0xffffffff;
      uVar2 = *(uint *)((int)this + 4);
      if (*(uint *)((int)this + 8) < uVar2) {
        FUN_00d83c2d();
      }
    }
    else {
      piVar3 = (int *)FUN_013db0d0(uVar2);
      this_ = *piVar3;
      if ((*(int *)((int)this + 0x14) != 0) &&
         (*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2 != 0)) {
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -4;
      }
      FUN_013db9e0(iVar1,0);
      uVar2 = *(uint *)((int)this + 4);
      if (*(uint *)((int)this + 8) < uVar2) {
        FUN_00d83c2d();
      }
    }
    FUN_013db5c0(local_14,this,uVar2,&this_);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
    SetEvent(*(HANDLE *)((int)this + 0x38));
  }
  ExceptionList = local_c;
  return;
}

