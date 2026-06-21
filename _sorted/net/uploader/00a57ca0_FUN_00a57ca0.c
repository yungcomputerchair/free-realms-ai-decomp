// addr: 0x00a57ca0
// name: FUN_00a57ca0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void removeFirstQueuedNodeAndReleasePayload(void * owner, void * list) */

void __thiscall removeFirstQueuedNodeAndReleasePayload(void *this,void *owner,void *list)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  
                    /* Removes the first node from a doubly-linked queue/list, asks a nested manager
                       to release the node payload, decrements the list count, and frees the node.
                       Class ownership is not evident. */
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0xe8);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 4);
  }
  if (piVar2 != (int *)0x0) {
    _Memory = *(int **)owner;
    if (_Memory != (int *)0x0) {
      if (*_Memory == 0) {
        *(int *)owner = _Memory[1];
      }
      else {
        *(int *)(*_Memory + 4) = _Memory[1];
      }
      if ((int *)_Memory[1] == (int *)0x0) {
        *(int *)((int)owner + 4) = *_Memory;
      }
      else {
        *(int *)_Memory[1] = *_Memory;
      }
      _Memory[1] = 0;
      *_Memory = 0;
      *(int *)((int)owner + 8) = *(int *)((int)owner + 8) + -1;
      (**(code **)(*piVar2 + 8))(_Memory[2]);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}

