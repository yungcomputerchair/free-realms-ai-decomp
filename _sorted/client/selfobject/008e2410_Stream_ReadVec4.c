// addr: 0x008e2410
// name: Stream_ReadVec4
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4(void * reader, float * outVec4) */

void __cdecl Stream_ReadVec4(void *reader,float *outVec4)

{
  int iVar1;
  
                    /* Reads four float32 components from the stream, setting overflow on underrun
                       and a NaN flag if any component is NaN. Existing sidecar comment notes it is
                       used for Vector4/Quaternion fields in SelfObject_ParseFromBlob. */
  iVar1 = 0;
  do {
    if (*(float **)((int)reader + 0xc) < *(float **)((int)reader + 8) + 1) {
      outVec4[iVar1] = 0.0;
      *(undefined1 *)((int)reader + 0x10) = 1;
      *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    }
    else {
      outVec4[iVar1] = **(float **)((int)reader + 8);
      *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
      if (NAN(outVec4[iVar1])) {
        *(undefined1 *)((int)reader + 0x11) = 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

