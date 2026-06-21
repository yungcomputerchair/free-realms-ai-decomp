// addr: 0x012cb080
// name: LobbyServiceTreeIterator_nextFromLeft
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyServiceTreeIterator_nextFromLeft(void * node) */

void __cdecl LobbyServiceTreeIterator_nextFromLeft(void *node)

{
  char cVar1;
  int *piVar2;
  
                    /* Walks through left-child links until a sentinel flag at offset 0x15 is
                       reached. This is generic STL tree iterator helper code tied to LobbyService
                       containers. */
  piVar2 = *(int **)node;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

