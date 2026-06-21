// addr: 0x00d53fe0
// name: TiXmlDocument_SetError
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlDocument_SetError(void * this, int errorCode_, char * errorLocation,
   int encoding_, char * sourceStart) */

void __thiscall
TiXmlDocument_SetError
          (void *this,int errorCode_,char *errorLocation,int encoding_,char *sourceStart)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *extraout_ECX;
  
                    /* Records the first TinyXML parse error, stores the error id/string, and
                       optionally stamps row/column from parsing data. Evidence: indexes the TinyXML
                       error string table and writes error, row, and column fields. */
  if (*(char *)((int)this + 0x2c) == '\0') {
    *(int *)((int)this + 0x30) = errorCode_;
    *(undefined1 *)((int)this + 0x2c) = 1;
    pcVar2 = (&PTR_s_No_error_01b81b30)[errorCode_];
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00d53650(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    *(undefined4 *)((int)this + 0x40) = 0xffffffff;
    *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
    if ((errorLocation != (char *)0x0) && (encoding_ != 0)) {
      FUN_00d53bc0(errorLocation,sourceStart);
      *(undefined4 *)((int)this + 0x3c) = *extraout_ECX;
      *(undefined4 *)((int)this + 0x40) = extraout_ECX[1];
    }
  }
  return;
}

