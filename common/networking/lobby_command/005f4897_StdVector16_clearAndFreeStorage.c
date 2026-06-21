// addr: 0x005f4897
// name: StdVector16_clearAndFreeStorage
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector16_clearAndFreeStorage(void * param_1) */

void __fastcall StdVector16_clearAndFreeStorage(void *param_1)

{
                    /* Destroys any live 16-byte vector elements, frees the backing storage, and
                       resets begin/end/capacity pointers to zero. Evidence: calls
                       StdVector16_destroyRangeThunk with begin/end before freeing param_1+4
                       storage. */
  if (*(void **)((int)param_1 + 4) != (void *)0x0) {
    StdVector16_destroyRangeThunk
              (param_1,*(void **)((int)param_1 + 4),*(void **)((int)param_1 + 8),param_1);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 4));
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  return;
}

