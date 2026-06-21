// addr: 0x01539dc0
// name: Zlib_inflateBuffer
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Zlib_inflateBuffer(void * outBuffer, uint * outBytes, void * inBuffer, int
   inBytes) */

int __cdecl Zlib_inflateBuffer(void *outBuffer,uint *outBytes,void *inBuffer,int inBytes)

{
  int iVar1;
  void *local_38;
  int local_34;
  void *local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* Inflates a complete zlib buffer using version 1.2.3 and updates the output
                       byte count on success. It converts zlib stream-end/buffer-end cases into the
                       return codes expected by callers. */
  local_34 = inBytes;
  local_38 = inBuffer;
  local_28 = *outBytes;
  local_2c = outBuffer;
  local_18 = 0;
  local_14 = 0;
  iVar1 = zlib_inflateInit_(&local_38,"1.2.3",0x38);
  if (iVar1 == 0) {
    iVar1 = FUN_010ee1a0(&local_38,4);
    if (iVar1 != 1) {
      Zlib_inflateEndState(&local_38);
      if ((iVar1 != 2) && ((iVar1 != -5 || (local_34 != 0)))) {
        return iVar1;
      }
      return -3;
    }
    *outBytes = local_24;
    iVar1 = Zlib_inflateEndState(&local_38);
  }
  return iVar1;
}

