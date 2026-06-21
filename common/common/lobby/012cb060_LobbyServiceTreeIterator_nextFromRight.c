// addr: 0x012cb060
// name: LobbyServiceTreeIterator_nextFromRight
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyServiceTreeIterator_nextFromRight(void * node) */

void __cdecl LobbyServiceTreeIterator_nextFromRight(void *node)

{
  char cVar1;
  int iVar2;
  
                    /* Walks from a tree node through right-child links until a sentinel flag at
                       offset 0x15 is reached. This is STL red-black tree iterator helper code used
                       by LobbyService containers. */
  iVar2 = *(int *)((int)node + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}

