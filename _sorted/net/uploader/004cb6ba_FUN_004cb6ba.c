// addr: 0x004cb6ba
// name: FUN_004cb6ba
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_004cb6ba(void * queue, void * entry) */

void __thiscall FUN_004cb6ba(void *this,void *queue,void *entry)

{
  undefined4 uVar1;
  
                    /* Resets the event handle stored in an entry and pushes that entry onto a
                       singly-linked pending list at queue offset 0x18. */
  ResetEvent(*(HANDLE *)queue);
  uVar1 = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)queue + 8) = 0;
  *(undefined4 *)((int)queue + 4) = uVar1;
  *(void **)((int)this + 0x18) = queue;
  return;
}

