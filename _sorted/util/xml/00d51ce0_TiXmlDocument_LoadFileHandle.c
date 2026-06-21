// addr: 0x00d51ce0
// name: TiXmlDocument_LoadFileHandle
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TiXmlDocument_LoadFileHandle(void * this, void * file) */

bool __thiscall TiXmlDocument_LoadFileHandle(void *this,void *file)

{
  char cVar1;
  void *_File;
  long lVar2;
  char *_Memory;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _File = file;
                    /* Loads XML text from an open FILE into a TiXmlDocument, normalizing line
                       endings and setting TinyXML errors for null or empty files. Evidence: uses
                       fseek/ftell/fread, clears children, appends normalized text, and calls
                       TiXmlDocument_SetError. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (file == (void *)0x0) {
    TiXmlDocument_SetError(this,2,(char *)0x0,0,(char *)0x0);
  }
  else {
    TiXmlNode_ClearChildren(this);
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    _fseek(_File,0,2);
    lVar2 = _ftell(_File);
    _fseek(_File,0,0);
    if (lVar2 != 0) {
      local_4 = 0;
      FUN_00d535b0(lVar2);
      _Memory = Mem_Alloc(lVar2 + 1);
      *_Memory = '\0';
      iVar3 = FUN_00d8ae0b(_Memory,lVar2,1,_File);
      if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory[lVar2] = '\0';
      cVar1 = *_Memory;
      pcVar4 = _Memory;
      pcVar5 = _Memory;
      do {
        if (cVar1 == '\0') {
          if ((int)pcVar5 - (int)pcVar4 != 0) {
            FUN_00d53740(pcVar4,(int)pcVar5 - (int)pcVar4);
          }
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*pcVar5 == '\n') {
          FUN_00d53740(pcVar4,pcVar5 + (1 - (int)pcVar4));
LAB_00d51e01:
          pcVar4 = pcVar5 + 1;
          pcVar5 = pcVar4;
        }
        else if (*pcVar5 == '\r') {
          if (0 < (int)pcVar5 - (int)pcVar4) {
            FUN_00d53740(pcVar4,(int)pcVar5 - (int)pcVar4);
          }
          file = (void *)CONCAT31(file._1_3_,10);
          FUN_00d53740(&file,1);
          if (pcVar5[1] != '\n') goto LAB_00d51e01;
          pcVar4 = pcVar5 + 2;
          pcVar5 = pcVar4;
        }
        else {
          pcVar5 = pcVar5 + 1;
        }
        cVar1 = *pcVar5;
      } while( true );
    }
    TiXmlDocument_SetError(this,0xd,(char *)0x0,0,(char *)0x0);
  }
  ExceptionList = local_c;
  return false;
}

