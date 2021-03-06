<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Bem-vindo ao $product';
$labels['username']  = 'Usuário';
$labels['password']  = 'Senha';
$labels['server']    = 'Servidor';
$labels['login']     = 'Entrar';

// taskbar
$labels['logout']   = 'Sair';
$labels['mail']     = 'E-mail';
$labels['settings'] = 'Configurações';
$labels['addressbook'] = 'Catálogo de endereços';

// mailbox names
$labels['inbox']  = 'Caixa de entrada';
$labels['drafts'] = 'Rascunhos';
$labels['sent']   = 'Enviados';
$labels['trash']  = 'Lixeira';
$labels['junk']   = 'Spam';
$labels['show_real_foldernames'] = 'Exibir o nome real das pastas de sistema';

// message listing
$labels['subject'] = 'Assunto';
$labels['from']    = 'De';
$labels['sender']  = 'Remetente';
$labels['to']      = 'Para';
$labels['cc']      = 'Cópia';
$labels['bcc']     = 'Cópia Oculta (Cco)';
$labels['replyto'] = 'Responder para';
$labels['followupto'] = 'Encaminhar para';
$labels['date']    = 'Data';
$labels['size']    = 'Tamanho';
$labels['priority'] = 'Prioridade';
$labels['organization'] = 'Organização';
$labels['readstatus'] = 'Status de leitura';
$labels['listoptions'] = 'Lista de opções...';

$labels['mailboxlist'] = 'Pastas';
$labels['messagesfromto'] = 'Mensagens $from - $to de $count';
$labels['threadsfromto'] = 'Tópicos $from - $to de $count';
$labels['messagenrof'] = 'Mensagem $nr de $count';
$labels['fromtoshort'] = '$from - $to de $count';

$labels['copy']     = 'Copiar';
$labels['move']     = 'Mover';
$labels['moveto']   = 'Mover para...';
$labels['download'] = 'Baixar';
$labels['open']     = 'Abrir';
$labels['showattachment'] = 'Exibir';
$labels['showanyway'] = 'Exibir mesmo assim';

$labels['filename'] = 'Nome do arquivo';
$labels['filesize'] = 'Tamanho';

$labels['addtoaddressbook'] = 'Incluir no catálogo de endereços';

// weekdays short
$labels['sun'] = 'Dom.';
$labels['mon'] = 'Seg.';
$labels['tue'] = 'Ter.';
$labels['wed'] = 'Qua.';
$labels['thu'] = 'Qui.';
$labels['fri'] = 'Sex.';
$labels['sat'] = 'Sáb.';

// weekdays long
$labels['sunday']    = 'Domingo';
$labels['monday']    = 'Segunda-feira';
$labels['tuesday']   = 'Terça-feira';
$labels['wednesday'] = 'Quarta-feira';
$labels['thursday']  = 'Quinta-feira';
$labels['friday']    = 'Sexta-feira';
$labels['saturday']  = 'Sábado';

// months short
$labels['jan']	= 'Jan.';
$labels['feb']	= 'Fev.';
$labels['mar']	= 'Mar.';
$labels['apr']	= 'Abr.';
$labels['may']	= 'Mai.';
$labels['jun']	= 'Jun.';
$labels['jul'] 	= 'Jul.';
$labels['aug']	= 'Ago.';
$labels['sep']	= 'Set.';
$labels['oct']	= 'Out.';
$labels['nov']	= 'Nov.';
$labels['dec']	= 'Dez.';

// months long
$labels['longjan']	= 'Janeiro';
$labels['longfeb']	= 'Fevereiro';
$labels['longmar']	= 'Março';
$labels['longapr']	= 'Abril';
$labels['longmay']	= 'Maio';
$labels['longjun']	= 'Junho';
$labels['longjul']	= 'Julho';
$labels['longaug']	= 'Agosto';
$labels['longsep']	= 'Setembro';
$labels['longoct']	= 'Outubro';
$labels['longnov']	= 'Novembro';
$labels['longdec']	= 'Dezembro';

$labels['today'] = 'Hoje';

// toolbar buttons
$labels['refresh']          = 'Atualizar';
$labels['checkmail']        = 'Verificar se há novas mensagens';
$labels['compose']          = 'Criar email';
$labels['writenewmessage']  = 'Criar nova mensagem';
$labels['reply']            = 'Responder';
$labels['replytomessage']   = 'Responder para o remetente';
$labels['replytoallmessage'] = 'Responder para o remetente e todos destinatários';
$labels['replyall']         = 'Responder a todos';
$labels['replylist']        = 'Responder para a lista';
$labels['forward']          = 'Encaminhar';
$labels['forwardinline']    = 'Encaminhar junto ao corpo da mensagem';
$labels['forwardattachment'] = 'Encaminhar como anexo';
$labels['forwardmessage']   = 'Encaminhar a mensagem';
$labels['deletemessage']    = 'Excluir a mensagem';
$labels['movemessagetotrash'] = 'Mover a mensagem para a Lixeira';
$labels['printmessage']     = 'Imprimir a mensagem';
$labels['previousmessage']  = 'Mensagem Anterior';
$labels['firstmessage']     = 'Primeira Mensagem';
$labels['nextmessage']      = 'Próxima Mensagem';
$labels['lastmessage']      = 'Última Mensagem';
$labels['backtolist']       = 'Voltar para a lista de mensagens';
$labels['viewsource']       = 'Exibir código-fonte';
$labels['mark']             = 'Marcar';
$labels['markmessages']     = 'Marcar mensagens';
$labels['markread']         = 'Como lidas';
$labels['markunread']       = 'Como não lidas';
$labels['markflagged']      = 'Como sinalizadas';
$labels['markunflagged']    = 'Como não sinalizadas';
$labels['moreactions']      = 'Mais ações...';
$labels['more']             = 'Mais';
$labels['back']             = 'Voltar';
$labels['options']          = 'Opções';

$labels['select'] = 'Selecionar';
$labels['all'] = 'Todas';
$labels['none'] = 'Nenhuma';
$labels['currpage'] = 'Página atual';
$labels['unread'] = 'Não lidas';
$labels['flagged'] = 'Marcadas';
$labels['unanswered'] = 'Não respondidas';
$labels['withattachment'] = 'Com anexo';
$labels['deleted'] = 'Excluídas';
$labels['undeleted'] = 'Não excluídas';
$labels['invert'] = 'Inverter';
$labels['filter'] = 'Filtrar';
$labels['list'] = 'Lista';
$labels['threads'] = 'Agrupamento por assunto';
$labels['expand-all'] = 'Expandir Tudo';
$labels['expand-unread'] = 'Expandir Não Lidas';
$labels['collapse-all'] = 'Recolher Tudo';
$labels['threaded'] = 'Agrupado';

$labels['autoexpand_threads'] = 'Expandir mensagens agrupadas';
$labels['do_expand'] = 'todos os grupos';
$labels['expand_only_unread'] = 'somente com mensagem(s) não lidas';
$labels['fromto'] = 'De/Para';
$labels['flag'] = 'Sinalizador';
$labels['attachment'] = 'Anexo';
$labels['nonesort'] = 'Nenhuma';
$labels['sentdate'] = 'Data de envio';
$labels['arrival'] = 'Data de recebimento';
$labels['asc'] = 'crescente';
$labels['desc'] = 'decrescente';
$labels['listcolumns'] = 'Lista de colunas';
$labels['listsorting'] = 'Coluna para ordenação';
$labels['listorder'] = 'Ordem da classificação';
$labels['listmode'] = 'Visualização em lista';

$labels['folderactions'] = 'Ações para as pastas...';
$labels['compact'] = 'Compactar';
$labels['empty'] = 'Esvaziar';
$labels['importmessages'] = 'Importar mensagens';

$labels['quota'] = 'Uso de disco';
$labels['unknown']  = 'desconhecido';
$labels['unlimited']  = 'ilimitado';

$labels['quicksearch']  = 'Pesquisa rápida';
$labels['resetsearch']  = 'Limpar pesquisa';
$labels['searchmod']  = 'Opções da pesquisa';
$labels['msgtext']  = 'Mensagem inteira';
$labels['body']  = 'Conteúdo';
$labels['type'] = 'Tipo';

$labels['openinextwin'] = 'Abrir em nova janela';
$labels['emlsave'] = 'Baixar (formato .eml)';
$labels['changeformattext'] = 'Exibir em formato de texto simples';
$labels['changeformathtml'] = 'Exibir com formatação HTML';

// message compose
$labels['editasnew']      = 'Editar como novo';
$labels['send']           = 'Enviar';
$labels['sendmessage']    = 'Enviar agora';
$labels['savemessage']    = 'Salvar como rascunho';
$labels['addattachment']  = 'Anexar um arquivo';
$labels['charset']        = 'Codificação';
$labels['editortype']     = 'Tipo de editor';
$labels['returnreceipt']  = 'Confirmação de recebimento';
$labels['dsn']            = 'Recibo de entrega';
$labels['mailreplyintro'] = 'Em $date, $sender escreveu:';
$labels['originalmessage'] = 'Mensagem original';

$labels['editidents']    = 'Editar identidades';
$labels['spellcheck']    = 'Revisar';
$labels['checkspelling'] = 'Verificar ortografia';
$labels['resumeediting'] = 'Continuar a edição';
$labels['revertto']      = 'Reverter para';

$labels['attach'] = 'Anexar';
$labels['attachments'] = 'Anexos';
$labels['upload'] = 'Enviar arquivo';
$labels['uploadprogress'] = '$percent ($current de $total)';
$labels['close']  = 'Fechar';
$labels['messageoptions']  = 'Opções da mensagem...';

$labels['low']     = 'Baixa';
$labels['lowest']  = 'Mais baixa';
$labels['normal']  = 'Normal';
$labels['high']    = 'Alta';
$labels['highest'] = 'Mais alta';

$labels['nosubject']  = '(sem assunto)';
$labels['showimages'] = 'Exibir imagens';
$labels['alwaysshow'] = 'Sempre exibir imagens de $sender';
$labels['isdraft']    = 'Esta é uma mensagem salva como rascunho.';
$labels['andnmore']   = '$nr mais...';
$labels['togglemoreheaders'] = 'Exibir informações adicionais da mensagem (cabeçalhos)';
$labels['togglefullheaders'] = 'Exibir cabeçalho original da mensagem';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Texto simples';
$labels['savesentmessagein'] = 'Salvar mensagens enviadas em';
$labels['dontsave'] = 'não salvar';
$labels['maxuploadsize'] = 'Tamanho máximo permitido do arquivo é $size';

$labels['addcc'] = 'Adicionar Cópia';
$labels['addbcc'] = 'Adicionar Cópia Oculta';
$labels['addreplyto'] = 'Adicionar Endereço de Resposta';
$labels['addfollowupto'] = 'Adicionar Endereço de Encaminhamento';

// mdn
$labels['mdnrequest'] = 'O remetente desta mensagem deseja ser notificado quando você ler esta mensagem. Você permite o envio desta notificação?';
$labels['receiptread'] = 'Confirmação de Leitura (exibida)';
$labels['yourmessage'] = 'Esta é uma confirmação de leitura da sua mensagem';
$labels['receiptnote'] = 'Nota: Esta confirmação de leitura somente informa que a mensagem foi aberta no computador do destinatário. Não há garantia que o destinatário tenha lido ou compreendido o conteúdo da mensagem.';

// address boook
$labels['name']         = 'Nome';
$labels['firstname']    = 'Primeiro Nome';
$labels['surname']      = 'Sobrenome';
$labels['middlename']   = 'Segundo Nome';
$labels['nameprefix']   = 'Prefixo';
$labels['namesuffix']   = 'Sufixo';
$labels['nickname']     = 'Apelido';
$labels['jobtitle']     = 'Ocupação';
$labels['department']   = 'Departamento';
$labels['gender']       = 'Sexo';
$labels['maidenname']   = 'Nome de solteira';
$labels['email']        = 'E-Mail';
$labels['phone']        = 'Telefone';
$labels['address']      = 'Endereço';
$labels['street']       = 'Rua';
$labels['locality']     = 'Cidade';
$labels['zipcode']      = 'CEP';
$labels['region']       = 'Estado';
$labels['country']      = 'País';
$labels['birthday']     = 'Data de nascimento';
$labels['anniversary']  = 'Aniversário';
$labels['website']      = 'Site';
$labels['instantmessenger'] = 'Mensagem instantânea (IM)';
$labels['notes'] = 'Anotações';
$labels['male']   = 'masculino';
$labels['female'] = 'feminino';
$labels['manager'] = 'Gerente';
$labels['assistant'] = 'Assistente';
$labels['spouse'] = 'Cônjuge';
$labels['allfields'] = 'Todos os campos';
$labels['search'] = 'Pesquisar';
$labels['advsearch'] = 'Pesquisa Avançada';
$labels['advanced'] = 'Avançado';
$labels['other'] = 'Outro';

$labels['typehome']   = 'Residencial';
$labels['typework']   = 'Trabalho';
$labels['typeother']  = 'Outro';
$labels['typemobile']  = 'Celular';
$labels['typemain']  = 'Principal';
$labels['typehomefax']  = 'Fax Residencial';
$labels['typeworkfax']  = 'Fax do Trabalho';
$labels['typecar']  = 'Carro';
$labels['typepager']  = 'Pager';
$labels['typevideo']  = 'Vídeo';
$labels['typeassistant']  = 'Assistente';
$labels['typehomepage']  = 'Página pessoal';
$labels['typeblog'] = 'Blog';
$labels['typeprofile'] = 'Perfil';

$labels['addfield'] = 'Adicionar campo...';
$labels['addcontact'] = 'Adicionar novo contato';
$labels['editcontact'] = 'Editar contato';
$labels['contacts'] = 'Contatos';
$labels['contactproperties'] = 'Propriedades do contato';
$labels['personalinfo'] = 'Informações pessoais';

$labels['edit']   = 'Editar';
$labels['cancel'] = 'Cancelar';
$labels['save']   = 'Salvar';
$labels['delete'] = 'Excluir';
$labels['rename'] = 'Renomear';
$labels['addphoto'] = 'Adicionar';
$labels['replacephoto'] = 'Substituir';
$labels['uploadphoto'] = 'Enviar foto';

$labels['newcontact']     = 'Criar novo contato';
$labels['deletecontact']  = 'Exclui os contatos selecionados';
$labels['composeto']      = 'Compor mensagem para';
$labels['contactsfromto'] = 'Contatos $from - $to de $count';
$labels['print']          = 'Imprimir';
$labels['export']         = 'Exportar';
$labels['exportall']      = 'Exportar todos';
$labels['exportsel']      = 'Exportar selecionados';
$labels['exportvcards']   = 'Exportar os contatos em formato vCard';
$labels['newcontactgroup'] = 'Criar novo grupo de contatos';
$labels['grouprename']    = 'Renomear grupo';
$labels['groupdelete']    = 'Excluir grupo';
$labels['groupremoveselected'] = 'Remover os contatos selecionados do grupo';

$labels['previouspage']   = 'Página Anterior';
$labels['firstpage']      = 'Primeira Página';
$labels['nextpage']       = 'Próxima Página';
$labels['lastpage']       = 'Última Página';

$labels['group'] = 'Grupo';
$labels['groups'] = 'Grupos';
$labels['listgroup'] = 'Listar membros do grupo';
$labels['personaladrbook'] = 'Endereços pessoais';

$labels['searchsave'] = 'Salvar pesquisa';
$labels['searchdelete'] = 'Excluir pesquisa';

$labels['import'] = 'Importar';
$labels['importcontacts'] = 'Importar contatos';
$labels['importfromfile'] = 'Importar do arquivo:';
$labels['importtarget'] = 'Adicionar novos contatos ao catálogo de endereços:';
$labels['importreplace'] = 'Substituir o catálogo de endereços atual';
$labels['importdesc'] = 'Você pode enviar contatos de um catálogo de endereços existente.<br/>Os contatos devem ser enviados no formato <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> ou CSV (valores separados por vírgula).';
$labels['done'] = 'Concluído';

// settings
$labels['settingsfor'] = 'Configurações para';
$labels['about'] = 'Sobre';
$labels['preferences'] = 'Preferências';
$labels['userpreferences'] = 'Preferências do usuário';
$labels['editpreferences'] = 'Editar preferências do usuário';

$labels['identities'] = 'Identidades';
$labels['manageidentities'] = 'Gerenciar identidades desta conta';
$labels['newidentity'] = 'Nova identidade';

$labels['newitem'] = 'Novo item';
$labels['edititem'] = 'Editar item';

$labels['preferhtml'] = 'Exibir em HTML';
$labels['defaultcharset'] = 'Conjunto padrão de caracteres';
$labels['htmlmessage'] = 'Mensagem HTML';
$labels['messagepart'] = 'Parte';
$labels['digitalsig'] = 'Assinatura Digital';
$labels['dateformat'] = 'Formato da data';
$labels['timeformat'] = 'Formato da hora';
$labels['prettydate'] = 'Exibir datas amigáveis';
$labels['setdefault']  = 'Definir como padrão';
$labels['autodetect']  = 'Automático';
$labels['language']  = 'Idioma';
$labels['timezone']  = 'Fuso horário';
$labels['pagesize']  = 'Mensagens por página';
$labels['signature'] = 'Assinatura';
$labels['dstactive']  = 'Horário de verão';
$labels['showinextwin'] = 'Abrir mensagem em uma nova janela';
$labels['composeextwin'] = 'Compor em uma nova janela';
$labels['htmleditor'] = 'Criar mensagens em HTML';
$labels['htmlonreply'] = 'em resposta à mensagem em HTML somente';
$labels['htmlonreplyandforward'] = 'em resposta ou encaminhamento de mensagem em HTML';
$labels['htmlsignature'] = 'Assinatura em HTML';
$labels['showemail'] = 'Exibir o endereço de email junto ao nome de exibição';
$labels['previewpane'] = 'Exibir pré-visualização';
$labels['skin'] = 'Aparência da interface (tema)';
$labels['logoutclear'] = 'Esvaziar a Lixeira ao sair';
$labels['logoutcompact'] = 'Compactar a Caixa de Entrada ao sair';
$labels['uisettings'] = 'Interface de usuário';
$labels['serversettings'] = 'Configurações do Servidor';
$labels['mailboxview'] = 'Exibição da Caixa de Correio';
$labels['mdnrequests'] = 'Envio de Confirmação de Leitura para o remetente';
$labels['askuser'] = 'solicite minha confirmação';
$labels['autosend'] = 'enviar confirmação';
$labels['autosendknown'] = 'enviar confirmação para os meus contatos, caso contrário, pergunte-me';
$labels['autosendknownignore'] = 'enviar confirmação para os meus contatos, caso contrário, ignore';
$labels['ignore'] = 'ignorar';
$labels['readwhendeleted'] = 'Marcar a mensagem como lida ao excluir';
$labels['flagfordeletion'] = 'Marcar a mensagem para exclusão ao invés de excluir';
$labels['skipdeleted'] = 'Não exibir mensagens excluídas';
$labels['deletealways'] = 'Excluir as mensagens se movê-las para a lixeira falhar';
$labels['deletejunk'] = 'Apagar as mensagens da pasta de SPAM sem movê-las para a lixeira';
$labels['showremoteimages'] = 'Exibir imagens externas';
$labels['fromknownsenders'] = 'de remetentes conhecidos';
$labels['always'] = 'sempre';
$labels['showinlineimages'] = 'Exibir imagens anexadas abaixo da mensagem';
$labels['autosavedraft']  = 'Salvar rascunho automaticamente';
$labels['everynminutes']  = 'a cada $n minuto(s)';
$labels['refreshinterval']  = 'Atualização (verificação de novas mensagens, etc.)';
$labels['never']  = 'nunca';
$labels['immediately']  = 'imediatamente';
$labels['messagesdisplaying'] = 'Exibição de mensagens';
$labels['messagescomposition'] = 'Redigir mensagens';
$labels['mimeparamfolding'] = 'Nomes de anexos';
$labels['2231folding'] = 'RFC 2231 Integral (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'RFC 2047 Integral (outro)';
$labels['force7bit'] = 'Usar codificação MIME para caracteres 8-bit';
$labels['advancedoptions'] = 'Opções avançadas';
$labels['focusonnewmessage'] = 'Focar janela do navegador ao receber nova mensagem';
$labels['checkallfolders'] = 'Verificar se há novas mensagens em todas as pastas';
$labels['displaynext'] = 'Exibir a mensagem seguinte após excluir/mover uma mensagem';
$labels['defaultfont'] = 'Fonte padrão para mensagens HTML';
$labels['mainoptions'] = 'Opções Principais';
$labels['browseroptions'] = 'Opções do navegador';
$labels['section'] = 'Seção';
$labels['maintenance'] = 'Manutenção';
$labels['newmessage'] = 'Nova Mensagem';
$labels['signatureoptions'] = 'Opções de Assinatura';
$labels['whenreplying'] = 'Quando responder';
$labels['replyempty'] = 'Não incluir a mensagem original';
$labels['replytopposting'] = 'iniciar nova mensagem acima da original';
$labels['replybottomposting'] = 'iniciar nova mensagem abaixo da original';
$labels['replyremovesignature'] = 'Remover assinatura original da mensagem ao respondê-la';
$labels['autoaddsignature'] = 'Adicionar assinatura automaticamente';
$labels['newmessageonly'] = 'somente em novas mensagens';
$labels['replyandforwardonly'] = 'somente em respostas e encaminhamentos';
$labels['insertsignature'] = 'Inserir assinatura';
$labels['previewpanemarkread']  = 'Marcar mensagens pré-visualizadas como lidas';
$labels['afternseconds']  = 'depois de $n segundos';
$labels['reqmdn'] = 'Sempre pedir confirmação de leitura';
$labels['reqdsn'] = 'Sempre pedir confirmação de entrega';
$labels['replysamefolder'] = 'Colocar as respostas na mesma pasta da mensagem original';
$labels['defaultabook'] = 'Catálogo de endereços padrão';
$labels['autocompletesingle'] = 'Ignorar endereços alternativos no autocompletar';
$labels['listnamedisplay'] = 'Listar contatos como';
$labels['spellcheckbeforesend'] = 'Verificar ortografia antes de enviar uma mensagem';
$labels['spellcheckoptions'] = 'Opções do Verificador Ortográfico';
$labels['spellcheckignoresyms'] = 'Ignorar palavras com símbolos';
$labels['spellcheckignorenums'] = 'Ignorar palavras com números';
$labels['spellcheckignorecaps'] = 'Ignorar palavras com todas letras maiúsculas';
$labels['addtodict'] = 'Adicionar ao dicionário';
$labels['mailtoprotohandler'] = 'Associar links de e-mail (mailto:) para envio de mensagem através do webmail';
$labels['standardwindows'] = 'Usar popups como janelas do navegador';
$labels['forwardmode'] = 'Encaminhamento de mensagens';
$labels['inline'] = 'Em linha (no corpo da mensagem)';
$labels['asattachment'] = 'como anexo';

$labels['folder']  = 'Pasta';
$labels['folders']  = 'Pastas';
$labels['foldername']  = 'Nome da pasta';
$labels['subscribed']  = 'Inscrito';
$labels['messagecount'] = 'Mensagens';
$labels['create']  = 'Criar';
$labels['createfolder']  = 'Criar nova pasta';
$labels['managefolders']  = 'Gerenciar pastas';
$labels['specialfolders'] = 'Pastas de sistema';
$labels['properties'] = 'Propriedades';
$labels['folderproperties'] = 'Propriedades da pasta';
$labels['parentfolder'] = 'Pasta pai';
$labels['location'] = 'Localização';
$labels['info'] = 'Informação';
$labels['getfoldersize'] = 'Exibir o tamanho da pasta';
$labels['changesubscription'] = 'Clique para ativar/desativar';
$labels['foldertype'] = 'Tipo de Pasta';
$labels['personalfolder']  = 'Pasta Particular';
$labels['otherfolder']  = 'Pasta de outro Usuário';
$labels['sharedfolder']  = 'Pasta Pública';

$labels['sortby'] = 'Ordenar por';
$labels['sortasc']  = 'Ascendente';
$labels['sortdesc'] = 'Descendente';
$labels['undo'] = 'Desfazer';

$labels['installedplugins'] = 'Plugins instalados';
$labels['plugin'] = 'Plugin';
$labels['version'] = 'Versão';
$labels['source'] = 'Fonte';
$labels['license'] = 'Licença';
$labels['support'] = 'Obter suporte';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Inglês';
$labels['westerneuropean'] = 'Oeste Europeu';
$labels['easterneuropean'] = 'Leste Europeu';
$labels['southeasterneuropean'] = 'Sudeste Europeu';
$labels['baltic'] = 'Báltico';
$labels['cyrillic'] = 'Cirílico';
$labels['arabic'] = 'Árabe';
$labels['greek'] = 'Grego';
$labels['hebrew'] = 'Hebraico';
$labels['turkish'] = 'Turco';
$labels['nordic'] = 'Nórdico';
$labels['thai'] = 'Tailandês';
$labels['celtic'] = 'Celta';
$labels['vietnamese'] = 'Vietnamita';
$labels['japanese'] = 'Japonês';
$labels['korean'] = 'Coreano';
$labels['chinese'] = 'Chinês';

?>
