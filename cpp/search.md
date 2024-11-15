I need a project plan to build a service that will hook into the Bing public search engine. The service will be written using GNU C++ 17. The service will support indexing internal content and processes search queries through a dispatch using 'libcurl'. The service will use threads to handle different tasks concurrently and include the dispatch logic to route queries to either Bing or an internal indexer, depending on the query type. The service will adhere to SOLID principles and properly handle errors and exceptions. The service will be built using TDD with DocTest. Provide a breakdown high-level steps to accomplish this goal. I do not need code examples yet.
```

```
I need to build a service that will hook into the Bing public search engine. 
Requirements:
- the API must support the GET and POST protocols over HTTPS
- all requests must be logged
- adherence to SOLID principles 
- proper handling of errors and exceptions
Details:
- The service will be written using GNU C++ 17.
- support indexing internal content
- processes search queries through a dispatch using 'libcurl'
- uses threads to handle different tasks concurrently 
- includes the dispatch logic to route queries to either Bing or an internal indexer, depending on the query type 
```

```
I would like to use TDD with DocTest to build the service. What are the steps to accomplish this goal? Can you provide examples of how to use DocTest to test the service?
```

