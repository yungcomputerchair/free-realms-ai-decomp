// addr: 0x00ab3710
// name: Stream_ReadTwoVec4
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadTwoVec4(void * reader, void * outRecord) */

void __cdecl Stream_ReadTwoVec4(void *reader,void *outRecord)

{
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* Reads two Vec4 values from the stream and copies them to an eight-dword
                       output record. Exact record class is unknown. */
  Stream_ReadVec4(reader,&local_20);
  *(float *)outRecord = local_20;
  *(undefined4 *)((int)outRecord + 4) = local_1c;
  *(undefined4 *)((int)outRecord + 8) = local_18;
  *(undefined4 *)((int)outRecord + 0xc) = local_14;
  Stream_ReadVec4(reader,&local_20);
  *(float *)((int)outRecord + 0x10) = local_20;
  *(undefined4 *)((int)outRecord + 0x14) = local_1c;
  *(undefined4 *)((int)outRecord + 0x18) = local_18;
  *(undefined4 *)((int)outRecord + 0x1c) = local_14;
  return;
}

