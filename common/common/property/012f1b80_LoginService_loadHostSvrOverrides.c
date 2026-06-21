// addr: 0x012f1b80
// name: LoginService_loadHostSvrOverrides
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LoginService_loadHostSvrOverrides(void * this) */

void __fastcall LoginService_loadHostSvrOverrides(void *this)

{
  char cVar1;
  FILE *_File;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined4 local_40c;
  undefined2 local_408;
  char local_404 [1024];
  uint local_4;
  
                    /* Reads host.svr and applies host/port/ghost/gport entries to LoginService host
                       strings and port fields, with ghost overriding the main host. */
  local_4 = DAT_01b839d8 ^ (uint)&local_40c;
  _File = _fopen("host.svr","r");
  if (_File != (FILE *)0x0) {
    local_40c = DAT_018d643c;
    local_408 = DAT_018d6440;
    iVar2 = FUN_00d8b641(local_404,0x400,_File);
    while (iVar2 != 0) {
      pcVar3 = _strtok(local_404,(char *)&local_40c);
      iVar2 = __stricmp(pcVar3,"host");
      if (iVar2 == 0) {
        pcVar4 = _strtok((char *)0x0,(char *)&local_40c);
        pcVar3 = pcVar4;
        if (DAT_01cbd978 == '\0') {
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     ((int)this + 4),pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
          pcVar3 = pcVar4;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     ((int)this + 0x20),pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
        }
        else {
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     ((int)this + 0x20),pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
        }
      }
      else {
        iVar2 = __stricmp(pcVar3,"port");
        if (iVar2 == 0) {
          pcVar3 = _strtok((char *)0x0,(char *)&local_40c);
          if (DAT_01cbd978 == '\0') {
            lVar5 = _atol(pcVar3);
            *(long *)((int)this + 0x40) = lVar5;
LAB_012f1d3c:
            *(long *)((int)this + 0x3c) = lVar5;
          }
          else {
            lVar5 = _atol(pcVar3);
            *(long *)((int)this + 0x40) = lVar5;
          }
        }
        else {
          iVar2 = __stricmp(pcVar3,"ghost");
          if (iVar2 == 0) {
            pcVar4 = _strtok((char *)0x0,(char *)&local_40c);
            pcVar3 = pcVar4;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &DAT_01bb94bc,pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       ((int)this + 4),
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)&DAT_01bb94bc,0,0xffffffff);
          }
          else {
            iVar2 = __stricmp(pcVar3,"gport");
            if (iVar2 == 0) {
              pcVar3 = _strtok((char *)0x0,(char *)&local_40c);
              lVar5 = _atol(pcVar3);
              DAT_01cbd96c = lVar5;
              goto LAB_012f1d3c;
            }
          }
        }
      }
      do {
        pcVar3 = _strtok((char *)0x0,(char *)&local_40c);
      } while (pcVar3 != (char *)0x0);
      iVar2 = FUN_00d8b641(local_404,0x400,_File);
    }
    _fclose(_File);
  }
  return;
}

