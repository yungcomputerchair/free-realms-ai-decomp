// addr: 0x008c9dc0
// name: Stream_ReadBool
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadBool(void * reader, bool * outValue) */

void __cdecl Stream_ReadBool(void *reader,bool *outValue)

{
                    /* Reads one byte from the stream as a bool and sets the reader overflow flag on
                       underrun. Called by SelfObject_ParseFromBlob and other packet deserializers.
                        */
  if (*(char **)((int)reader + 0xc) < *(char **)((int)reader + 8) + 1) {
    *outValue = false;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *outValue = **(char **)((int)reader + 8) != '\0';
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 1;
  return;
}

