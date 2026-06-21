// addr: 0x010ef7a0
// name: Zlib_inflateEndState
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Zlib_inflateEndState(void * stream) */

int __cdecl Zlib_inflateEndState(void *stream)

{
  int iVar1;
  
                    /* Frees inflate internal state allocations using the stream allocator and
                       clears the state pointer, returning 0 or -2 for invalid input. Evidence:
                       checks stream+0x1c state and stream+0x24 free callback, frees nested
                       allocation and state block. */
  if (((stream != (void *)0x0) && (*(int *)((int)stream + 0x1c) != 0)) &&
     (*(code **)((int)stream + 0x24) != (code *)0x0)) {
    iVar1 = *(int *)(*(int *)((int)stream + 0x1c) + 0x34);
    if (iVar1 != 0) {
      (**(code **)((int)stream + 0x24))(*(undefined4 *)((int)stream + 0x28),iVar1);
    }
    (**(code **)((int)stream + 0x24))
              (*(undefined4 *)((int)stream + 0x28),*(undefined4 *)((int)stream + 0x1c));
    *(undefined4 *)((int)stream + 0x1c) = 0;
    return 0;
  }
  return -2;
}

