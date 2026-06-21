// addr: 0x0139ba10
// name: FUN_0139ba10
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_0139ba10(void * this) */

void __fastcall sub_0139ba10(void *this)

{
                    /* Destroys the intrusive/tree container rooted at this+0xfc and resets its
                       sentinel links and element count to empty. No class or caller evidence was
                       present in the briefing, so only the container-clear behavior is proposed. */
  IntToObjectTree_destroySubtree(*(void **)(*(int *)((int)this + 0xfc) + 4));
  *(int *)(*(int *)((int)this + 0xfc) + 4) = *(int *)((int)this + 0xfc);
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)this + 0xfc);
  *(int *)(*(int *)((int)this + 0xfc) + 8) = *(int *)((int)this + 0xfc);
  return;
}

