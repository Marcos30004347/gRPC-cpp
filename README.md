# Relatório
## Fundanebtis de Sistemas Paralelos e Distribuidos

### Resumo:
Nesse trabalho foi implementado um servidor e cliente que utilizam o gRPC(google RPC) para comunicação sincrona em uma rede utilizando o protocolo http2. 

### GRPC:

A interface implementada pode ser encontrada em protos/informer.proto, nesse arquivo foi definido o contrato do serviço Informer, esse contrato define dois métodos para comunicação RPC, GetDescription e GetPort que são responsáveis por retornar a descrição de um serviço e a Porta em que esse serviço está escutando respectivamente.

Esse contrato pode ser compilado em código c++ através do comando:
    
    $ make compile-protos

Esse comando irá executar o compilador protoc para gerar os tipos e stubs utilizados para comunicação RPC.

### Servidor
A implementação do servidor está em server/main.cc dentro da classe InformerImp, ela utiliza o código gerado pelo protoc para definir a implementação dos métodos RPC. Os métodos GetDescription e GetPort são responsáveis por abrir o arquivo que contem as informações dos clientes, procurar no conteúdo desse arquivo pelo serviço desejado, e a partir disso extrair as informações relevantes para cada método, no caso, descrição e porta respectivamente. 

### CLiente
O cliente é ainda mais simples que o servidor, ele usa o endereço passado para o cliente para inicializar o stub, uma classe que abstrai o stub em algo mais nativo no ambiente c++, escondendo detalhes de rede como status e o stub propriamente dito.

### Formato do arquivo de serviços
Como solicitado, o arquivo de serviços segue o mesmo padrão que o arquivo /etc/services, onde a primeira coluna descreve o nome do serviço, a segunda contem <porta>/<protocolo> e em sequência é possivel inserir uma descrição na forma de comentário, ou seja, a descrição é inserida após '#' na mesma linha.
