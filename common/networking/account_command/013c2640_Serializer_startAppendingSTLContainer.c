// addr: 0x013c2640
// name: Serializer_startAppendingSTLContainer
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Serializer_startAppendingSTLContainer(int serializer, int count) */

void __thiscall Serializer_startAppendingSTLContainer(void *this,int serializer,int count)

{
                    /* Starts appending an STL container to the serializer by ensuring the
                       serializer state is 2 and then writing/emitting the element count. The assert
                       string 'Wrong state in startAppendingSTLContainer %d' names the method. */
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 2;
  }
  if (*(int *)((int)this + 0x10) != 2) {
    FUN_012f5dc0("Wrong state in startAppendingSTLContainer %d",*(int *)((int)this + 0x10));
  }
  Serializer_appendInteger(this,serializer);
  return;
}

