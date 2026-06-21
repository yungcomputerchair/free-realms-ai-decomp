// addr: 0x0139e000
// name: PilePlayArea_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PilePlayArea_deletingDtor_thunk(void) */

void PilePlayArea_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny vtable thunk that forwards to PilePlayArea_deletingDtor. */
  PilePlayArea_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

